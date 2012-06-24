#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
struct message {
	long long num1, num2, num3;
	int node;
};
int main() {
	char str[256];
	int freq[150];
	int errFreq[150];
	int tot = 0;
	int errNum = 0;
	long long a = 0, b = 4294967295, c = -1; //EXPECTED VALUES
	message temp;
	memset(freq, 0, sizeof(freq));
	memset(errFreq, 0, sizeof(errFreq));
	gets(str); //REMOVE FIRST LINE
	while(gets(str)) {
		tot++;
		sscanf(str, "%lld %lld %lld %*s %*s %d", &temp.num1, &temp.num2, &temp.num3, &temp.node);
		temp.node-=40000;
		if(temp.num1 != a || temp.num2 != b || temp.num3 != c) {
			printf("#Error at node %d: %lld %lld %lld\n", temp.node, temp.num1, temp.num2, temp.num3);
			errNum++;
			errFreq[temp.node]++;
		}
		//cerr<<tot<<" ";
		freq[temp.node]++;
	}
	printf("#Total packets received = %d\n", tot);
	printf("#Packets with errors in payload = %d\n", errNum);
	printf("#NodeID\tReceived\tErrors\tError%%\n");
	for(int I = 0; I < 150; I++) {
		if(freq[I])
			printf("%d\t%d\t%d\t%f\n", I + 40000, freq[I], errFreq[I], ((float) errFreq[I]/freq[I]) * 100.0);
	}
	return 0;
}
