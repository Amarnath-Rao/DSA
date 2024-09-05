from collections import defaultdict, Counter

documents = {
    1: "new home sales top forecasts",
    2: "home sales rise in july",
    3: "increase in home sales in july",
    4: "july new home sales rise"
}

def build_inverted_index(docs):
    inverted_index = defaultdict(lambda: {'freq': 0, 'docs': defaultdict(int)})
    
    for doc_id, text in docs.items():
        words = text.lower().split()
        word_counts = Counter(words)
        for word, freq in word_counts.items():
            inverted_index[word]['freq'] += freq
            inverted_index[word]['docs'][doc_id] = freq
    
    return inverted_index

def print_inverted_index(index):
    for word, info in sorted(index.items()):
        doc_list = ', '.join(f'{doc_id}' for doc_id, freq in sorted(info['docs'].items()))
        print(f"{word}: [{info['freq']}] -> {doc_list}")

inverted_index = build_inverted_index(documents)
print_inverted_index(inverted_index)