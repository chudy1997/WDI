#include <iostream>

using namespace std;
struct node
{
    int w;
    node *next;
};
/*
int main()
{
    node*p;
    node* first=NULL;
    int s,N,i;
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cin>>s;
        p=new node;
        p->w=s;
        p->next=first;
        first=p;
    }
    node*x=first;
    while(true)
    {
        cout << x->w<<" ";
        if(x->next==NULL)break;
        x = x->next;
    }
    system("pause");
    return 0;

}
 */
/*
struct wiel
{
    int wsp;
    int wyk;
    wiel* next;
};
string przepisz(string s,int &a,int &b)
{
    int i=0;
    if(s[0]=='x')a=1;
    while(s[i]!='x')
    {
        a*=10;
        a+=s[i];
        i++;
    }
    i+=2;
    if(i==s.length()){b=0;return "";}
    while(i<s.length())
    {
        b*=10;
        b+=s[i];
        i++;
    }
    return "";
}
int main()
{
    int N,w1,w2;
    char x='+';
    w1=w2=1;
    string s="";
    cin>>N;
    wiel* first=NULL;
    wiel* p;
    for(int i=0;i<N;i++)
    {
        cin>>x;
        cin>>s;
        s=przepisz(s,w1,w2);
        p=new wiel;
        p->wsp=w1;
        if(x=='-')p->wsp*=-1;
        p->wyk=w2;
        p->next=first;
        first=p;
        w1=w2=0;
    }
    p=first;
    for(int i=0;i<N-1;i++)
    {
        cout<<p->wsp<<"x^"<<p->wyk<<" + ";
        p=p->next;
    }
    if(p->wyk!=0)cout<<p->wsp<<"x^"<<p->wyk;
    else  cout<<p->wsp;
}
 */
/*
struct st
{
    int w;
    st* next;
};
void push(st* x,st* a)
{
    a->next=x;
    cin>>a->w;
    x=a;
    return ;
}
bool empty(st* x)
{
    cout<<"A";
    return(x!=NULL);
}
st* pop(st *x,int &a)
{
    cout<<x->w;
    a=0;
    if(empty(x))
    {
        a=x->w;
        x=x->next;
        return x;

    }
    return NULL;
}
int main()
{
    int N=5;
    int a;
    st* top=NULL;
    st* p=NULL;
    for(int i=0;i<N;i++)
    {
        p=new st;
        push(top,p);
    }
    cout<<top->next->w;
    for(int i=0;i<N;i++)
    {
        p=pop(p,a);
        cout<<a;
    }
    system("pause");
}
 */

//stos

/*
struct stos
{
    int w;
    stos* next;
};
bool empty(stos* x)
{
    return (x==NULL);
}
stos* push(stos* x,int a)
{

    stos* p=new stos;
    p->w=a;
    if(empty(x)){p->next=NULL;return p;}
    p->next=x;
    return p;
}
stos* pop(stos* x,int &a)
{
    a=x->w;
    return x->next;
}
stos* init()
{
    int a;
    cin>>a;
    stos* x=push(NULL,a);
    return x;
}
int main()
{
    const int N=5;
    int a;
    stos* x=init();
    for(int i=0;i<N-1;i++)
    {
        cin>>a;
        x=push(x,a);
    }
    for(int i=0;i<N;i++)
    {
        x=pop(x,a);
        cout<<a<<endl;
    }
}
*/

//kolejka
/*
struct kolej
{
    int w;
    kolej* next;
};
bool empty(kolej* x)
{
    return (x==NULL);
}
kolej* put(kolej* x,int b)
{
    if(empty(x)){x=new kolej;cin>>x->w;x->next=NULL;return x;}
    kolej* a=new kolej;
    x->next=a;
    a->next=NULL;
    a->w=b;
    return a;
}
kolej* get(kolej* x,int &a)
{
    if(!empty(x))
    {
        a=x->w;
        return x->next;
    }
}
kolej* init ()
{
    kolej* first=put(NULL,0);
    return first;
}

int main()
{
    const int N=4;
    int a;
    kolej *first,*last;
    first=last=init();
    for(int i=0;i<N-1;i++)
    {
        cin>>a;
        last=put(last,a);
    }
    kolej* p=first;
    for(int i=0;i<N;i++)
    {
        cout<<p->w<<endl;
        p=p->next;
    }
    system("pause");
}
*/

//Binary search
/*
#include <conio.h>
const int N=10;

int binarySearch(int x,int t[N])
{
    int l,p,m;
    l=0;
    p=N-1;
    m=(l+p)/2;
    while(p>=l)
    {
        if(t[m]<x)
        {
            l=m+1;
        }
        else if(t[m]>x)
        {
            p=m-1;
        }
        else if(t[m]==x)return m+1;
        m=(l+p)/2;
    }
    return -1;
}

int binarySearch2(int x,int t[N])
{
    int l,p,m;
    l=0;p=N-1;m=(l+p)/2;
    while(l<=p)
    {
        if(t[m]<x)l=m+1;
        else p=m-1;
        m=(l+p)/2;
    }
    if(t[l]==x){cout<<l+1;return 0;}
    cout<<"not found!";
    return 0;
}
int main()
{
    int t[N]={2,3,5,7,11,13,17,19,23,29};
    int x;
    do
    {
        cin>>x;
        //binarySearch(x,t);
        binarySearch2(x,t);
    }while(getch()!=27);
}
 */

//Sortowanie
/*
const int N=10;
void sortP1(int t[],int n)
{
    int i,j,x;
    for(i=2;i<=n;i++)
    {
        x=t[i];
        j=i-1;
        while(x<t[j])
        {
            t[j+1]=t[j];
            j--;
            cout<<t[j]<<" <-> "<<x<<" ";
        }
        t[j+1]=x;
        cout<<endl;

    }
}

int main()
{
    int t[N]={0,2,5,11,7,17,8,8,9,0};
    sortP1(t,6);
    for(int i=1;i<N;i++)cout<<t[i]<<" ";
    system("pause");
}
 */
/*
void add(node* &first,int w)
{
    if(!first)
    {
        first=new node;
        first->w=w;
        first->next=NULL;
        return ;
    }
    if(first->w > w){node* p=new node;p->next=first;p->w=w;first=p;return ;}
    node* p=first,* q=first;
    while(p && p->w < w )
    {
        q=p;
        p=p->next;
    }
    node* r=new node;
    q->next=r;
    r->next=p;
    r->w=w;
    return ;
}

void bin(int n)
{
    if(n > 0)
    {
        bin(n/2);
        cout<<n%2;
    }
    return ;
}
int bin2(int n)
{
    if(n > 0)
    {
        return bin2(n/2)*10+(n%2);
    }
}

void del(node* &first,int n)
{
    if(!first)return ;
    node* p=first,* q=first;
    while(p && p->w < n){q=p;p=p->next;}
    if(p && p->w == n)
    {
        if(p==first){first=first->next;}
        else {q->next=p->next;}
    }
    return ;
}
void print(node* first)
{
    if(!first)return;
    while(first)
    {
        cout<<first->w<<endl;
        first=first->next;
    }
    system("pause");
    return;
}

void reverse(node* &first)
{
    if(!first || !first->next)return;
    node* p,*q,*r;
    p=first; q=p->next;
    p->next=NULL; r=q->next;
    while(r)
    {
        q->next=p;
        p=q;
        q=r;
        r=r->next;
    }
    q->next=p;
    first=q;
    return ;
}

node* scal(node* first,node* sec)
{
    if(!first)return sec;
    if(!sec)return first;

    node *nowy;
    if(first->w < sec->w){nowy=first; first=first->next;}
    else{nowy=sec; sec=sec->next;}
    node* ogon=nowy;

    while(first && sec)
    {
        if(first->w < sec->w)
        {
            ogon->next=first;
            ogon=first;
            first=first->next;
        }
        else
        {
            ogon->next=sec;
            ogon=sec;
            sec=sec->next;
        }
    }
    if(first)ogon->next=first;
    else ogon->next=sec;
    return nowy;
}

node* scalRek(node* first,node* sec)
{
    if(!first)return sec;
    if(!sec)return first;

    node* nowy;

    if(first->w < sec->w)
    {
        nowy=first;
        nowy->next= scalRek(first->next,sec);
    }
    else
    {
        nowy=sec;
        nowy->next= scalRek(first,sec->next);
    }
    return nowy;
}

node* sortuj(node* first)
{
    if(!first)return NULL;
    node* head[10],* tail[10];
    for(int i=0;i<10;i++)head[i]=tail[i]=NULL;

    while(first)
    {
        int x=(first->w)%10;
        if(!head[x])head[x]=tail[x]=first;
        else
        {
            tail[x]->next = first;
            tail[x] = first;
        }
        first=first->next;
    }
    first=NULL;
    for(int i=9;i>=0;i--)
    {
        if(head[i])
        {
            head[i]->next = first;
            first = tail[i];
        }
    }
    return first;
}
int licznikWCyklu(node* first)
{
    node* rab=first->next,*tur=first;
    int licz=0;
    while(rab!=tur)
    {
        rab=rab->next->next;
        tur=tur->next;
    }

    do
    {
        tur=tur->next;
        licz++;
    }
    while(tur!=rab);
    return licz;
}

void addLast(node* &first,int w)
{
    node*p=first;
    while(!p->next)p=p->next;
    node* q=new node;
    q->w=w;
    q->next=NULL;
    p->next=q;
    p=q=NULL;
    delete p,q;
}

void dele(node* x)
{
    x->next=x->next->next;
}
int usun(node* sort,node* unsort) {
    int licz = 0;
    node *p = sort;
    if (!sort || !unsort)return 0;
    /////////////
    while (p && p->next->w < unsort->w) {
        p = p->next;
    }
    if (p->next->w == unsort->w) {
        unsort = unsort->next;
        licz += 2;
        dele(p);
    }
    //////////
    node *q;
    while (unsort->next) {
        p = sort;
        int x = unsort->next->w;
        while (p->next->next && p->next->w < x) {
            p = p->next;
        }
        if (p->next->w == x) {
            dele(p);
            dele(unsort);
            licz += 2;
        }
        q = unsort;
        unsort = unsort->next;
    }
///////////////
    p = sort;
    while (p->next->next && p->next->w < unsort->w) {
        p = p->next;
    }
    if (p->next->w == unsort->w) {
        licz += 2;
        dele(p);
        dele(q);
    }
//////////////
    return licz;
}
int main()
{
    node* first=NULL,*sec=NULL;
    add(first,1);
    add(first,2);
    add(first,3);
    add(first,4);
    del(first,1);
    del(first,3);
    print(first);
    add(first,1);
    add(first,3);
    print(first);
    del(first,2);
    print(first);
    system("pause");
}
*/
/*
int main()
{
    node* first,*p,*q;
    first=new node;
    first->w=1;
    first->next=NULL;
    q=first;
    for(int i=2;i<=20;i++)
    {
        p=new node;
        p->w=i;
        q->next=p;
        q=p;
    }
    p->next=NULL;
    node* sec=new node;
    sec->w=0;
    sec->next=NULL;
    q=sec;
    for(int i=1;i<=20;i+=1)
    {
        p=new node;
        p->w=3*i;
        q->next=p;
        q=q->next;
    }
    p->next=NULL;
    print(first);
    cout<<endl<<endl;
    print(sec);
    cout<<usun(first,sec);
    system("pause");
}
*/
/*
int bin(int n)
{
    int licz=0;
    while(n>0)
    {
        if (n % 2)licz++;
        n/=2;
    }
    if(licz<8)return 0;
    if(licz>=8 && licz<=24)return 1;
    return 2;
}
node* bity(node* first)
{
    node* head[3];
    node* tail[3];
    for(int i=0;i<3;i++)head[i]=tail[i]=NULL;
    node* p=first;
    while(p)
    {
        int x=bin(p->w);
        cout<<x<<" "<<p->w<<endl;
        if(!head[x]){head[x]=p;tail[x]=p;}
        else
        {
            tail[x]->next=p;
            tail[x]=p;
        }
        p=p->next;
    }
    node* final=NULL;
    for(int i=2;i>=0;i--)
    {
        if(head[i])
        {
            tail[i]->next=final;
            final=head[i];
        }
    }
    return final;
}

int main()
{
    node* first,*p,*q;
    first=new node;
    first->w=16777216*2-1;
    first->next=NULL;
    q=first;
    for(int i=2;i<=20;i++)
    {
        p=new node;
        p->w=i*2353;
        q->next=p;
        q=p;
    }
    p->next=NULL;
    //print(first);
    first=bity(first);
    print(first);
    system("pause");
}
*/
/*
void usun(node* &adres)
{
    adres->next=adres->next->next;
    return;
}
void winnie1(node* &first)
{
    if(!first || !first->next)return ;
    node* p,* q,* r;
    p=q=first;

    while(q && q->next)
    {
        bool b=false;
        r=q;
        while(r->next)
        {
            if(q->w == r->next->w)
            {
                usun(r);
                b=true;
            }
            else r=r->next;
        }
        if(b)
        {
            if(q==first)
            {
                first=p=q=first->next;
            }
            else usun(p);
        }
        p=q;
        q=q->next;
    }
}

struct node2
{
    node2* next;
    node2* prev;
};

void winnie2(node2* &first,node2* nowy,int n)
{
    node2* p=first;
    if(!first && n!= 1){cout<<"BLAD!";return ;}
    for(int i=1;i<n-1;i++)
    {
        if(p->next)p=p->next;
        else {cout<<"BLAD!";return ;}
    }
    nowy->next=p->next;
    p->next=nowy;
    nowy->prev=p;
    if(nowy->next)nowy->next->prev=nowy;
    return ;
}

void winnie3(node2* first,int n)
{
    if(!first)return;
    node2* p=first;
    for(int i=1;i<n;i++)
    {
        if(p)p=p->next;
        else return ;
    }
    if(!p)return ;
    p->prev->next=p->next;
    if(p->next)p->next->prev=p->prev;
    return ;
}

int winnie4(node* first)
{
    node* rab=first->next;
    node* tur=first;
    int licz=1;
    while(rab!=tur)
    {
        rab=rab->next->next;
        tur=tur->next;
    }
    tur=tur->next;
    while(tur!=rab)
    {
        tur=tur->next;
        licz++;
    }
    return licz;
}
void winnie5(node* &first)
{
    if(!first || !first->next)return ;
    node* p=first;
    node* q;
    while(p->next!=first)
    {
        q=p;
        while(q->next != first)
        {
            if(q->next->w == p->w)
            {
                q->next=q->next->next;
            }
            else q=q->next;
        }
        p=p->next;
    }
    return ;
}
void printwinnie5(node* p)
{
    cout<<p->w<<endl;
    node* first=p->next;
    if(!first)return;
    while(first!=p)
    {
        cout<<first->w<<endl;
        first=first->next;
    }
    system("pause");
    return;
}
node* winnie6(node* &first,node* &sec)
{
    if(!first)return sec;
    if(!sec)return first;

    node* nowa=NULL,* koniec=NULL;
    if(first->w < sec->w){nowa=koniec=first;first=first->next;}
    else if(sec->w < first->w){nowa=koniec=sec;sec=sec->next;}
    else if(first->w == sec->w){nowa=koniec=first;first=first->next;sec=sec->next;}
    while(first && sec)
    {
        if(first->w < sec->w)
        {
            koniec->next=first;
            koniec=first;
            first=first->next;
        }
        else if(sec->w < first->w)
        {
            koniec->next=sec;
            koniec=sec;
            sec=sec->next;
        }
        else if(first->w == sec->w)
        {
            koniec->next=first;
            koniec=first;
            first=first->next;
            sec=sec->next;
        }
    }
    if(first)koniec->next=first;
    else koniec->next=sec;
    first=sec=NULL;
    delete first,sec;
    return nowa;
}
//winnie8
#define Max 5
struct tab
{
    int w;
    int k;
    int n;
    tab* next;
};

tab* nowa(int t[Max][Max])// z wartownikiem!!!
{
    tab *first, *nowy, *tyl;
    first = new tab;
    nowy = first;
    for (int i = 0; i < Max; i++) {
        for (int j = 0; j < Max; j++) {
            if (t[i][j]) {
                nowy->w = i;
                nowy->k = j;
                nowy->n = t[i][j];
                nowy->next = new tab;
                tyl = nowy;
                nowy = nowy->next;
            }
        }
    }
    tyl->next = NULL;
    delete nowy;
    return first;
}

int zwroc(tab* first,int w,int k)
{
    if(!first)return -1;
    if(w>Max-1 || k> Max-1)return -1;
    while(first->w <= w && first->k < k)
    {
        first=first->next;
    }
    if(first->k == k)return first->n;
    return -1;
}

node* winnie9(node* &first,node* &sec)
{
    if(!first or !sec)return NULL;
    node* final=NULL;
    node* last=NULL;
    while(first)
    {
        while(sec && first->w > sec->w)
        {
            sec=sec->next;
        }
        if(sec && sec->w == first->w)
        {
            if(!final)final=last=first;
            else
            {
                last->next = first;
                last = first;
            }
        }
        first=first->next;
    }
    first=sec=NULL;
    delete first,sec;
    return final;
}
node* winnie11(node* first)
{
    if(!first || !first->next)return first;
    node* p=first ,* q=p->next,* r=q->next;
    first->next=NULL;
    while(r)
    {
        q->next=p;
        p=q;
        q=r;
        r=r->next;
    }
    q->next=p;
    p=r=NULL;
    delete p,r;
    return q;
}

struct node3
{
    int wsp;
    int pot;
    node3* next;
};
void add3(node3* &first,int wsp,int pot)
{
    if(!first){first=new node3;first->wsp=wsp;first->pot=pot;first->next=NULL;return ;}
    node3* p=first;
    while(p->next && p->next->pot < pot)p=p->next;
    node3* nowy=new node3;
    nowy->next=p->next;
    nowy->pot=pot;
    nowy->wsp=wsp;
    p->next=nowy;
    return ;
}
void print3(node3* first)
{
    if(!first)return ;
    cout<<"W(x)= ";
    while(first->next)
    {
        if (!first->wsp)
        {
            first = first->next;
            continue;
        }
        else if (first->wsp == 1 || first->wsp ==-1){cout << "x^" << first->pot;}
        else{cout << first->wsp << "x^" << first->pot;}
        node3* p=first;
        etykieta:
        if(p->next->wsp<0)cout<<" - ";
        else if(p->next->wsp>0)cout<<" + ";
        else {p=first->next;goto etykieta;}

        first = first->next;
    }
    if(!first->wsp){first=first->next;}
    else if(first->wsp==1||first->wsp==-1){cout<<"x^"<<first->pot;first=first->next;}
    else {cout<<first->wsp<<"x^"<<first->pot;first=first->next;}
    return ;
}
node3* winnie10(node3* &first, node3* &sec)
{
    if(!first){while(sec){sec->wsp*=-1;sec=sec->next;}return sec;}
    if(!sec)return first;
    node3* final=NULL,* last=NULL;
    while(first && sec)
    {
        if(first->pot < sec->pot)
        {
            if(!final){final=last=first;first=first->next;}
            else{last->next=first;last=first;first=first->next;}
        }
        else if(first-> pot == sec->pot)
        {
            if(!final){first->wsp -= sec->wsp; final=last=first;first=first->next;sec=sec->next;}
            else{first->wsp -= sec->wsp;last->next=first;last=first;first=first->next;sec=sec->next;}
        }
        else if(first->pot > sec->pot)
        {
            if(!final){sec->wsp*= -1; final=last=sec;sec=sec->next;}
            else{sec->wsp *= -1;last->next=sec;last=sec;sec=sec->next;}
        }
    }
    if(first)last->next=first;
    else if(sec){last->next=sec;while(sec){sec->wsp *=-1;sec=sec->next;}}
    return final;
}
 */
/*
int repeated(node* &sort,node* &unsort);
int main()
{
    node *first = NULL;
    node *sec = NULL;
    add(first, 2);
    add(sec, 2);
    add(first, 3);
    add(first, 4);
    add(sec, 5);
    add(first, 5);
    add(sec, 8);
    print(first);
    print(sec);
    //print(winnie9(first, sec));
    //print(first);
    node3* fir=NULL;
    node3* sek=NULL;
    add3(fir,1,1);
    add3(fir,1,3);
    add3(fir,1,4);
    add3(fir,1,5);
    add3(sek,1,2);
    add3(sek,1,3);
    add3(sek,1,5);
    add3(sek,1,7);
    fir=winnie10(fir,sek);
    print3(fir);
    system("pause");
    int i;
    i=repeated(first,sec);
    print(first);
    print(sec);
    cout<<i;
    system("pause");
}


//kartkowki

int repeated(node* &sort,node* &unsort)
{
    node* p=sort,* q=unsort;
    node* r1=sort,*r2=unsort;
    int licznik=0;
    if(!sort||!unsort)return 0;

    while(q)
    {
        p=r1=sort;
        while(p && p->w < q->w){r1=p;p=p->next;}
        if(!p)break;
        if(p->w == q->w)
        {
            if(q==unsort){unsort=unsort->next;}
            if(p==sort){sort=sort->next;}
            licznik+=2;
            r1->next=p->next;
            r2->next=q->next;
        }
        r2=q;
        q=q->next;
    }
    return licznik;
}
*/
/*
struct kwadrat
{
    int w;
    int k;
};
struct kwadr
{
    bool czy;
    kwadrat srodek;
};
const int N=5;
bool czyMozliwe(int w,int k, int x)
{
    return (w-x>=0 && w+x<N && k-x>=0 && k+x<N);
}
bool czyRowne(int t[N][N],int w,int k,int x,int wart)
{
    int iloczyn=t[w-x][k-x]*t[w-x][k+x]*t[w+x][k-x]*t[w+x][k+x];
    return (iloczyn == wart);
}
kwadr* szukaj(int t[N][N],int k)
{
    kwadr* wynik=new kwadr;
    wynik->czy=false;
    wynik->srodek.k=wynik->srodek.k=-1;
    for(int i=3;i<=N;i+=2)
    {
        int x=i/2;
        for(int j=x;j<N-x;j++)
            for(int l=x;l<N-x;l++)
            {
                if(czyRowne(t,j,l,x,k))
                {
                    wynik->czy=true;
                    wynik->srodek.w=j;
                    wynik->srodek.k=l;
                    return wynik;
                }
            }
    }
    return wynik;
}
 */
/*
int main()
{
    int t[N][N]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int x=112;
    for(int i=0;i<N;i++)
    {
        for (int k = 0; k < N; k++)cout<<t[i][k]<<" ";
        cout<<endl;
    }
    kwadr* wynik=szukaj(t,x);
    cout<<wynik->czy<<endl;
    if(wynik->czy){cout<<"("<<wynik->srodek.w<<","<<wynik->srodek.k<<")";}
    system("pause");
}
*/
/*
int ileJedynek(int x)
{
    int k=0;
    while(x>0)
    {
        if(x%2)k++;
        x/=2;
    }
    if(k<8)return 1;
    if(k>=8 && k<=24)return 2;
    if(k>24)return 3;
}

node* podzial(node *first)
{
    if (!first)return first;
    node *head[3] = {NULL, NULL, NULL};
    node *tail[3] = {NULL,NULL,NULL};
    while (first) {
        int x = ileJedynek(first->w)-1;
        if (!head[x]) { head[x] = tail[x] = first; }
        else
        {
            tail[x]->next = first;
            tail[x] = first;
        }
        first = first->next;
    }
    for (int i = 2; i >= 0; i--)
    {
        if (head[i]){tail[i]->next = first;}
        first = head[i];
    }
    return first;
}
void usuwanie(node* &first,node* &nowy1,node* &nowy2)
{
    node* last1,* last2;
    nowy1=last1=nowy2=last2=NULL;
    while(first)
    {
        int x=first->w%3;
        if(!x){node* p=first;first=first->next;delete p;continue;}
        if(x==1)
        {
            if(!nowy1){nowy1=last1=first;}
            else{last1->next=first;last1=first;}
            first=first->next;
            continue;
        }
        if(x==2)
        {
            if(!nowy2){nowy2=last2=first;}
            else{last2->next=first;last2=first;}
            first=first->next;
        }
    }
    last1->next=last2->next=NULL;
    last1=last2=first=NULL;
    delete last1,last2,first;
    return ;
}
const int N=3;
bool czyWyspa(bool mapa[N][N],int w1,int k1)
{
    return (w1>=0 && w1<N && k1>=0 && k1<N && mapa[w1][k1]);
}
void kierunki(int &w,int &k,int kier)
{
    int poziom[8]={-1,-1,0,1,1,1,0,-1};
    int pion[8]={0,1,1,1,0,-1,-1,-1};
    w+=poziom[kier];
    k+=pion[kier];
    return ;
}
int zatapianie(bool mapa[N][N],int x,int y)
{
    if(mapa[x][y])
    {
        int rozmiar=0;
        for(int i=0;i<8;i++)
        {
            int a=x,b=y;
            kierunki(a,b,i);
            while(czyWyspa(mapa,a,b))
            {
                mapa[a][b]=false;
                rozmiar++;
                kierunki(a,b,i);
            }
        }
        mapa[x][y]=false;
        return rozmiar+1;
    }
    return 0;
}
void lan(node* &first,int w)
{
    if(!first){first=new node;first->w=w;first->next=NULL;}
    bool b=false;
    node* p=first,* q=first;
    while(p)
    {
        if(p->w == w)
        {
            if(p==first)first=first->next;
            else q->next=p->next;
            b=true;
        }
        q=p;
        p=p->next;
    }
    if(!b){p=new node;q->next=p;p->w=w;p->next=NULL;}
    return ;
}
node* lista(int x,int n=1)
{
    node* first=new node;
    first->w=n;
    first->next=NULL;
    if(n<x)
    {
        first->next=lista(x,n+1);
    }
    return first;
}

bool piatkiWOsemce(int x)
{
    int p=0;
    while(x>0)
    {
        if(x%8==5)p++;
        x/=8;
    }
    return(p%2==1);
}
void przerzuc(node* &first)
{
    node* p =first,* q=first;
    while(p)
    {
        if(piatkiWOsemce(p->w))
        {
            q->next=p->next;
            p->next=first;
            first=p;
            p=q->next;
        }
        else {q=p;p=p->next;}

    }
}
void u(node* &first)
{
    node*p=first;
    int x=0,max=0,i=1,ind=0,indmax=1;
    while(p->next)
    {
        if(p->w < p->next->w)x++;
        else
        {
            if(x>max){max=x;indmax =ind;ind=i;x=0;}
            else if(x==max){indmax=0;ind=i;}
            else if(x<max){ind=i;}
        }
        i++;
        p=p->next;
    }
    if(!indmax)return;
    else
    {
        p=first;
        for(i=1;i<indmax-1;i++)p=p->next;
        node* q=p;
        p=p->next;
        while(p->w < p->next->w)
        {
            q->next=p->next;
            p=p->next;
        }
        if(indmax==1)first=q->next;
    }
}
int main()
{
    node *first = lista(10);
    print(first);
    //przerzuc(first);
    print(first);
    u(first);
    print(first);
}
 */
/*
int dlugosc(int n)
{
    int licz=0;
    while(n>0)
    {
        licz++;
        n/=10;
    }
    return licz;
}
long long int pot(long long int n,int potega)
{
    long long int suma=0;
    while(n>0)
    {
        long long int il=1;
        for (int i = 0; i < potega; i++)
        {
            il*=n%10;
        }
        suma+=il;
        n /= 10;
    }
    return suma;
}
bool czyPierwsza(long long int n)
{
    if(n==2)return true;
    if(n<2 || n%2==0 )return false;
    for(int i=3;i*i<=n;i+=2){if(n%i==0)return false;}
    return true;
}
void zajebisteLiczby(int ile)
{
    int licznik=0;
        for(long long int i=1;;i++)
        {
            long long int sum = pot(i, dlugosc(i));
            if (sum == i)
            {
                if (czyPierwsza(i))
                {
                    cout << licznik + 1 << ". " << i << endl;
                    licznik++;
                    if (licznik == ile)return;
                }
            }
            if(i%10000000==0)cout<<i<<".\n";
        }
    return ;
}

int main()
{
    //cout<<dlugosc(124151)<<" "<< czyPierwsza(4)<< " "<<pot(5,3);
    zajebisteLiczby(5);
    system("pause");
    return 0;
}
 */
/*
int revers(int n)
{
    int r=0;
    while(n>0)
    {
        if(!r && !n%10){n/=10;continue;}
        r*=10;
        r+=n%10;
        n/=10;
    }
    return r;
}
void dzik(int n)
{
    cout << n << endl;
    int licz = 0;
    while (n != revers(n) && licz < 200) {
        n += revers(n);
        licz++;
    }
    if (licz == 200)cout << "error" << endl;
}

int main()
{
    for (int i = 1; i <= 200; i++)dzik(i);
    system("pause");
    return 0;
}
 */
#include <unistd.h>
int binarySearch(int s,int t[],int N)
{
    int l=0,p=N-1;
    int m=(l+p)/2;
    while(p>=l && t[m]!= s)
    {
        m=(l+p)/2;
        if(t[m]<s)l=m+1;
        else p=m-1;
    }
    if(t[m]==s)return m;
    return -1;
}
void sort1(int t[],int n)//wstawianie
{
    for(int i=1;i<n;i++)
    {
        int x = t[i];
        int j = i - 1;
        while (x < t[j] && j>=0 )
        {
            t[j+1] = t[j];
            j--;
        }
        t[j + 1] = x;
    }
}
void sort2(int t[],int n)//wybieranie
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(t[j]<t[min])min=j;
        }
        if(min==i)continue;
        t[i]+=t[min];
        t[min]=t[i]-t[min];
        t[i]=t[i]-t[min];
    }
    return ;
}
void sort3(int t[],int n)//babelkowo
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++){if(t[j]>t[j+1])swap(t[j],t[j+1]);}
    }
}
void qsort1(int t[],int n)//combsort
{
    int gap=n;
    bool swapped=true;

    while(gap>1 || swapped)
    {
        gap=max(int(gap/1.3),1);
        swapped=false;
        int top=n-gap+1;
        for(int i=0;i<top;i++)
        {
            int j=i+gap;
            if(t[i]>t[j]){swap(t[i],t[j]);swapped=true;}
        }

    }
}
void qsort2(int t[],int l,int p)//quicksort
{
    int j,k,x;
    j=l;k=p;
    x=t[(j+k)/2];
    while(j<=k)
    {
        while(t[j]<x)j++;
        while(t[k]>x)k--;
        if(j<=k){swap(t[j],t[k]);j++;k--;}
    }
    if(l<k)qsort2(t,l,k);
    if(j<p)qsort2(t,j,p);
}
void qsort3(int t[],int l,int p)
{
    int sr=(l+p)/2;
}
void wypisz(int t[],int n)
{
    for(int i=0;i<n;i++)cout<<t[i]<<endl;
    return;
}
#include <time.h>
#include <c++/fstream>
#include <c++/iomanip>

void wypelnij(int t[],int n)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)t[i]=rand()%100;
    return ;
}
const int N=1000;
void dzieleniePisemne(int a,int b,int w[N])
{
    int i,tmp,r;
    for(i=0;i<N;i++)w[i]=0;
    i=0;
    w[0]=a;
    r=0;
    for(int i=0;i<N;i++)
    {
        tmp=r*10+w[i];
        w[i]=tmp/b;
        r=tmp%b;
    }

}
#include <math.h>

    template<typename T>
    int sprawdzDokladnosc() {
        T x = 1.0;
        int n = 0;
        while(1.0 + x > 1.0) {
            x /= 2.0;
            n++;
        }
        return (int) floor(log10(2.0) * n);
    }

    template<typename T>
    int licz1() {
        T x = 1.0f;
        int n = 0;
        while(1.0f + x > 1.0f) {
            x /= 2.0f;
            n++;
        }
        return (int) floor(log10(2.0f) * n);
    }

    void zerowanie(int * x)
    {
        *x=0;
    }
    void wypisz(int t[])
    {
        for(int i=0;i<10;i++)cout<<t[i]<<endl;
    }
/*
bool OWP(int st){cout<<"Obrot w prawo o "<<st<<" stopni."<<endl;return true;}
bool OWL(int st){cout<<"Obrot w lewo o "<<st<<" stopni."<<endl;return true;}
bool RWG(int st){cout<<"Ruch w gore o "<<st<<" stopni."<<endl;return true;}
bool RWD(int st){cout<<"Ruch w dol o "<<st<<" stopni."<<endl;return true;}
bool RDP(int st){cout<<"Ruch do przodu o "<<st<<" stopni."<<endl;return true;}
bool RDT(int st){cout<<"Ruch do tylu o "<<st<<" stopni."<<endl;return true;}
int main()
{
    int t[20];
    bool (*(w[20]))(int st);
    cout<<"MENU\n1.OWP\n2.OWL\n3.RWG\n4.RWD\n5.RDP\n6.RDT\n7.Wykonac!\n8.Koniec!\n";
    while(true)
    {
        for (int i = 0; i < 20; i++){w[i] = NULL;t[i]=0;}
        int i=0;
        while (i<20)
        {
            int n;
            cin >> n;
            if(n==8)goto etykieta;
            if(n==7)
            {
                int j=0;
                cout<<"\nRUCHY ROBOTA1 \n";
                while(w[j]!=NULL)
                {
                    w[j](t[j]);
                    j++;
                }
            }
            switch (n)
            {
                case 1:
                    w[i]=&OWP;
                    cout<<"O ile stopni?: ";
                    cin>>t[i];
                    break;
                case 2:
                    w[i]=&OWL;
                    cout<<"O ile stopni?: ";
                    cin>>t[i];
                    break;
                case 3:
                    w[i]=&RWG;
                    cout<<"O ile stopni?: ";
                    cin>>t[i];
                    break;
                case 4:
                    w[i]=&RWD;
                    cout<<"O ile stopni?: ";
                    cin>>t[i];
                    break;
                case 5:
                    w[i]=&RDP;
                    cout<<"O ile stopni?: ";
                    cin>>t[i];
                    break;
                case 6:
                    w[i]=&RDT;
                    cout<<"O ile stopni?: ";
                    cin>>t[i];
                    break;
                default :
                    break;
            }
            i++;
        }
    }
    etykieta:
}
*/
/*
int main()
{
    const int N=500000;
    int t[N];
    wypelnij(t,N);
    qsort1(t,N);
    cout<<"juz\n";
    system("pause");
    wypelnij(t,N);
    qsort2(t,0,N-1);
    cout<<"juz\n";
    system("pause");

    string t1[]={"Mateusz","Marta","Karol"};
    string t2[]={"Mateuszowi","Marcie","Karolowi"};
    for(int i=0;;i++)
    {
        cout<<"kolejka nr "<<i+1<<". "<<t1[i%3]<<" polewaj "<<t2[(i+1)%3]<<"."<<endl;
        sleep(10);
        cout<<t1[(i+1)%3]<<"! Masz 10 sekund na wypicie!"<<endl;
        for(int j=10;j>0;j--){cout<<j<<endl;sleep(1);}
        sleep(10);
    }


    sleep(10);
}*/

class student
{
public:
    string pesel;
    string numerAlbumu;
    string semestr;
    string imie;
    string nazwisko;
    string uczelnia;
    string wydzial;
    string kierunek;
    string oceny[8][2];
    void dodajOcene(string ocena,int nr,string oceny[][2])
    {
        oceny[nr][1]=ocena;
        return ;
    }
    void wypiszOceny(string oceny[10][2])
    {
        for(int i=0;i<10;i++)cout<<oceny[i][0]<<" : "<<oceny[i][1]<<endl;
        return ;
    }
private:
};
int main()
{
    student Karol;
    Karol.pesel=97011403414;
    Karol.numerAlbumu=1234;
    Karol.semestr=1;
    Karol.imie="Karol";
    Karol.nazwisko="Bartyzel";
    Karol.uczelnia="AGH";
    Karol.wydzial="WIEiT";
    Karol.kierunek="Informatyka";
    cout<<Karol.wydzial;
}