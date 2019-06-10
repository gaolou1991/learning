
#include <stdio.h>

#define TEST

//
// 插入排序
//

void install_sort(int array[], int len) {
    int pos, index;

    // 异常情况处理
    if(len <= 1 || array == NULL) return;


    // 正常排序
    // 插入排序要求P位置之前的都是有序的
    // 因此，只需要在P位置之前找到一个合适位置即可
    for(pos=1; pos<len; pos++) {
        for(index=pos; index>0; index--) {
            if(array[index] < array[index-1]) {
                array[index] = array[index-1];
            }
            else break;
        }
        array[index] = array[pos];
    }
}


//
// 测试
//
#ifdef TEST
int main(void) {

    return 0;
}
#endif