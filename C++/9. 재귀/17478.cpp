#include <iostream>

using namespace std;

void a(int i, int n){
    for(int j=0; j<i; j++)
        printf("____");
    printf("\"����Լ��� ������?\"\n");

    if(i==n){
        for(int j=0; j<i; j++)
            printf("____");
        printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
    }
    
    else{
        for(int j=0; j<i; j++)
            printf("____");
        printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");


        for(int j=0; j<i; j++)
            printf("____");
        printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");

        for(int j=0; j<i; j++)
            printf("____");
        printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
        a(i+1, n);
    }

    for(int j=0; j<i; j++)
        printf("____");
    printf("��� �亯�Ͽ���.\n");
}

int main(){
    int n;
    scanf("%d", &n);

    printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
    a(0, n);

    return 0;
}