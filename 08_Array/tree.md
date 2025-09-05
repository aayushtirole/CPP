[ top of stack ] 
-------------------------
totalChaiServed frame:
  chai -> pointer to &chaiServed[0]
  size = 7
  total = (changes 0 → ... → 455)
  i = current loop index
-------------------------
main frame:
  chaiServed[0..6] = {50,60,55,70,65,80,75}
  total (will be set to returned 455)
-------------------------
[ bottom of stack ]
