states=0
ip=str(input())
op=[*ip]

for i in op:	
	match states:
		case 0:
			if i=='a':
				states=1
				
			elif i=='b':
				states=3
				
			else:
				states=5
				break;
		case 1:
			if i=='a':
				states=0
				
			elif i=='b':
				states=2
				
			else:
				states=5
				break;
		case 2:
			if i=='a':
				states=3
				
			elif i=='b':
				states=1
				
			else:
				states=5
				break;
		case 3:
			if i=='a':
				states=2
				
			elif i=='b':
				states=0
								
			else:
				states=5
				break;
		case default:
			print("state dead")
if states==0:
	print("Langauge processed");
else:
	print("compilation error");
