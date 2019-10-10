def listsum(lst: list)-> list:
    # 递归实现列表求和
    if len(lst) == 1:
        return lst[0]
    return lst[0] + listsum(lst[1:])

def convert_str(num: int, base: int)-> str:
    # 十进制数与不同进制数转换
    str_ = '0123456789ABCDEF'
    if num < base:
        return str_[num]
    return convert_str(num // base, base) + str_[num % base]

def hanoi(height, from_tower, with_tower, to_tower):
    if height >= 1:
        hanoi(height - 1, from_tower, to_tower, with_tower)
        print('from', from_tower, 'to', to_tower)
        hanoi(height - 1, with_tower, from_tower, to_tower)
    
def dpMakeChange(coin_list, change, min_coins):
    for cents in range(change+1):
        coin_count = cents
        for j in (c for c in coin_list if c < cents):
            if min_coins[cents-j] + 1 < coin_count:
                coin_count = min_coins[cents - j] + 1
        min_coins[cents] = coin_count
    print(min_coins[change])

if __name__ == "__main__":
    print(listsum([1, 2, 3, 4]))
    print(convert_str(10, 16))
    hanoi(2, 'a', 'b', 'c')
    coin_list = [1,5]
    change = 10
    min_coins = [0] * (change + 1)
    dpMakeChange(coin_list, change, min_coins)
