class Solution:
    def interpret(self, command: str) -> str:
        n=(command.replace('()','o'))
        return (n.replace('(al)','al'))