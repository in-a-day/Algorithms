import sys
from stack import Stack

symbol_dict = {'}': '{', ']': '[', ')': '('}
def par_checker(symbol_str: str):
    s = Stack()
    for i in symbol_str:
        if i not in symbol_dict:
            s.push(i)
        elif not s.is_empty():
            if symbol_dict[i] != s.pop():
                return False
        else:
            return False
    return s.is_empty()

if __name__ == "__main__":
    print(par_checker("{{{}}}"))
    print(par_checker("{({})}"))
    print(par_checker("[{{])}"))
