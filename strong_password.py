

# qus : https://www.hackerrank.com/contests/hourrank-24/challenges/strong-password/problem

numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"
input()
s=input()
ans = 0
found = any(i in numbers for i in s)
if not found:
    ans += 1
    s += "0"
found = any(i in lower_case for i in s)
if not found:
    ans += 1
    s += 'a'
found = any(i in upper_case for i in s)
if not found:
    ans += 1
    s += 'A'
found = any(i in special_characters for i in s)
if not found:
    ans += 1
    s += '!'
if len(s) < 6:
    ans += 6 - len(s)
print(ans)
