"C:\Program Files (x86)\Microchip\xc8\v1.33\bin\"xc8.exe  --chip=16F877A -G -mProjects\test\%1.map  --double=24 --float=24 --opt=default,+asm,-asmfile,-speed,+space,-debug --addrqual=ignore -N31 --warn=0 --asmlist --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,+osccal,-resetbits,-download,-stackcall,+clib --output=-mcof,+elf:multilocs --stack=compiled:auto:auto -oProjects\test\%1.elf Projects\test\%1.p1 Projects\test\delay.p1 Projects\test\adc.p1


