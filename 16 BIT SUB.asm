MOV DX,[2000H]
MOV CX,[2002H]
MOV AX,0H
SUB DX,CX
JNC STORE
INC AX
NEG DX     
STORE: MOV [2004H],DX
MOV [2006H],AX
HLT