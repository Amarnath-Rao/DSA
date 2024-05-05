command = "(al)G(al)()()G"
st=""
for i in range(0,len(command)):
    if command[i]=="G":
        st+="G"
    elif command[i]=="(" and command[i+1]==")":
        st+="o"
    elif command[i]=="(" and command[i+1]=="a":
        st+="al"
print(st)