from collections import defaultdict, Counter

documents = {
    1: "new home sales top forecasts",
    2: "home sales rise in july",
    3: "increase in home sales in july",
    4: "july new home sales rise"
}

stop_words = {"in", "on", "at", "the", "and", "a", "an", "to", "of"}

def build_inverted_index(docs):
    inverted_index = defaultdict(lambda: {'freq': 0, 'docs': defaultdict(int)})
    for doc_id, text in docs.items():
        words = text.lower().split()
        word_counts = Counter(words)
        for word, freq in word_counts.items():
            if word not in stop_words:  # Remove stop words
                inverted_index[word]['freq'] += freq
                inverted_index[word]['docs'][doc_id] = freq    
    return inverted_index

def print_inverted_index(index):
    for word, info in sorted(index.items()):
        doc_list = ', '.join(f'{doc_id}({freq})' for doc_id, freq in sorted(info['docs'].items()))
        print(f"{word}: [{info['freq']}] -> {doc_list}")

def search(inverted_index, query):
    query_words = query.lower().split(" and ")
    result_sets = []
    for word in query_words:
        if word in inverted_index:
            result_sets.append(set(inverted_index[word]['docs'].keys()))
        else:
            result_sets.append(set())    
    result = set.intersection(*result_sets) if result_sets else set()
    return sorted(result)


inverted_index = build_inverted_index(documents)
print_inverted_index(inverted_index)
query = "july"
print("Search result for",query,"is", search(inverted_index, query))