class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int a=0;
        int b=0;
        int c=0;
        int d=0;
        from_chars(arriveAlice.data(),arriveAlice.data()+2,a);
        from_chars(arriveBob.data(),arriveBob.data()+2,b);
        from_chars(leaveAlice.data(),leaveAlice.data()+2,c);
        from_chars(leaveBob.data(),leaveBob.data()+2,d);
        int p=0;
        int q=0;
        int r=0;
        int s=0;
        from_chars(arriveBob.data()+3,arriveBob.data()+5,p);
        from_chars(leaveAlice.data()+3,leaveAlice.data()+5,q);
        from_chars(arriveAlice.data()+3,arriveAlice.data()+5,r);
        from_chars(leaveBob.data()+3,leaveBob.data()+5,s);
        vector<int>months;
        months={0,31,59,90,120,151,181,212,243,273,304,334};
        int alicearrd=months[a-1]+r;
        int bobarrd=months[b-1]+p;
        int aliceled=months[c-1]+q;
        int bobled=months[d-1]+s;
        int res=min(aliceled,bobled)-max(alicearrd,bobarrd)+1;
        if (res>0){
            return res;
        }else{
            return 0;
        }
    }
};