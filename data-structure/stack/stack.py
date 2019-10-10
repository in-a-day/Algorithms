# 利用list实现stack

class Stack(object):
    def __init__(self):
        self.__item = []
        self.__len = 0
    
    def push(self, item):
        self.__len += 1
        return self.__item.append(item)
    
    def pop(self):
        self.__len -= 1
        return self.__item.pop()
    
    def peek(self):
        return self.__item[self._len - 1]

    def is_empty(self):
        return self.__len == 0

    def __len__(self)-> int:
        return self.__len

    def size(self)-> int:
        self.__len__()

    # __str__ 方法未实现则默认调用__repr__
    def __str__(self):
        return str(self.__item)

    def __repr__(self):
        return str(self.__item)

if __name__ == "__main__":
    s = Stack()
    print(s.is_empty())
    s.push(1)
    s.push('hh')
    print(s.is_empty())
    print(len(s))
    print(s.__len__())
    print(s)