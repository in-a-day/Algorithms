class Queue:
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.__item = []
    
    def enqueue(self, item):
        self.__item.append(item)

    def dequeue(self, item):
        return self.__item.pop(0)

    def size(self):
        return len(self.__item)
    
    def is_empty(self):
        return slef.size() == 0

    def __repr__(self):
        return str(self.__item)