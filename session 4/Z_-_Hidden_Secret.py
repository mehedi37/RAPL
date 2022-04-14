tc = int(input())
for i in range(tc):
    x = sorted(input().replace(' ', '').lower())
    y = sorted(input().replace(' ', '').lower())
    if (x == y):
        print(f'Case {i+1}: Yes')
    else:
        print(f'Case {i+1}: No')