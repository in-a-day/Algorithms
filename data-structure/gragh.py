from collections import deque
gragh = {}
gragh['cab'] = ['car', 'cat']
gragh['car'] = ['bar']
gragh['cat'] = ['mat', 'bat']
gragh['mat'] = ['bat']
gragh['bar'] = ['bat']
deq = deque()
deq += gragh['cab']
while deq:
    left = deq.popleft()

    print(left)
    if not left == 'bat':
        if not gragh.get(left, 0) == 0:
            deq += gragh[left]
    else:
        print('find')

