#!/usr/bin/python
import re

input = raw_input()
snake = input.split('_')
camel = re.findall(r'^[a-z]+|[A-Z][a-z]+', input)

if len(snake) > 1:
    ans = [ x if i == 0 else x[0].upper() + x[1:] for i,x in enumerate(snake) ]
    print "".join(ans)
else:
    print "_".join(camel).lower()
