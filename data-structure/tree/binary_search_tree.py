class LinkedBST:
    '''链表实现二叉搜索树'''
    def __init__(self):
        self.__root = None
        self.__left = None
        self.__right = None

    def addLeft(self, item):
        ''' 添加左节点'''
        self.__left = item

    def addRight(self, item):
        '''添加右节点'''
        self.__right = item
    
    def remove(self, item):
        '''移除元素, 首先判断是否存在'''
        pass

    def find(self, item):
        '''查询元素'''
        pass

    def replace(self, item, new_item):
        '''替换元素'''
        pass

    def clear(self):
        '''清空'''
        pass

    def preorder(self):
        '''前序遍历'''

        # do someting
        print(self.__root)

        if (self.__left):
            self.preorder(self.__left)

        if (self.__right):
            self.preorder(self.__right)

    def inorder(self):
        '''中序遍历'''
        if (self.__left):
            self.inorder(self.__left)

        # do someting
        print(self.__root)

        if (self.__right):
            self.inorder(self.__right)


    def postorder(self):
        # 后序遍历
        if (self.__left)
    
    def levelorder(self):
        # 层次遍历
        pass
