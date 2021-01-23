##For each integer n in the inclusive interval [a,b]:
##If 1<=n<=9 , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
##Else if n>9 and it is an even number, then print "even".
##Else if n>9  and it is an odd number, then print "odd".


int a,b;
string num[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
cin >> a >> b;
for (int i = a; i <= b; ++i) {
    if (i > 9) {
        i % 2 == 0 ? cout << "even\n" : cout << "odd\n";
    } else {
        cout << num[i] << endl;
    }        
}    
return 0;
