words = raw_input().split()
for i in words:
    if words.count(i) == 1:
        duplicate = False
    else:
        duplicate = True
        break

if duplicate:
    print 'no'
else:
    print 'yes'
