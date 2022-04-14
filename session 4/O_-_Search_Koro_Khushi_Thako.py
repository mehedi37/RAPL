def Convert(lst):
    res_dct = {lst[i]: i for i in range(0, len(lst))}
    return res_dct
def unique_list(lst):
    out = []
    already_appended = set()
    for num in lst :
        if num in already_appended :
            out.append(0)
        else :
            out.append(num)
            already_appended.add(num)
    return out

tc = int(input().split()[1])
x = [int(i) for i in input().split()]
x = unique_list(x)

dict = Convert(x)

for z in range(tc):
    y = int(input())
    try:
        print(dict[y])
    except:
        print(-1)