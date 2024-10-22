
dna = input('')

longest = ""

seq = ""

prev = ""

for char in dna:
    if(char == prev):
        seq += char
    else:
        if len(seq)> len(longest):
            longest = seq
        seq = char
    
    prev = char

if len(seq)> len(longest):
    longest = seq
print(longest)

