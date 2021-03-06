# 我就爛 亂寫的 感覺就錯很多 #<br>
## 僅供參考 ##<br>
資訊工程係  Java 程式設計  第八次作業<br>
班級：資工二乙 學號：B08170516   姓名：李知恩<br>

題目：請設計一個可以處理算術錯誤及陣列索引超出範圍錯誤的程式。<br>
說明：<br>
  1. 錯誤的發生與否是因輸入的資料而決定，而非由程式設計上的錯誤而產生。<br>
  2. 本次作業內容須包含執行過程及結果（即輸入及輸出）。<br>
  3. 本次作業須執行三次，分別為無錯誤執行，算術錯誤及陣列索引超出範圍錯誤。<br>

---

## 流程圖 ##
### 三種擇一 ###

<!-- ```flow
start=>start: 開始
9=>operation: import java.util.Scanne
14=>operation: 創建sc(scanner)
15=>operation: x = new int[3]
16=>operation: y = new int[3]
17=>inputoutput: 數入x,y陣列值(3)
18=>condition: for (int i = 0; i < 3; i++)
19=>inputoutput: "Please input x[%d]: ", i
20=>operation: x[i] = sc.nextInt()
21=>inputoutput: "Please input y[%d]: ", i
22=>operation: y[i] = sc.nextInt()
24=>inputoutput: 執行四次(嘗試超出陣列範圍)
25=>condition: for (int i = 0; i <= 3; i++)
27=>inputoutput: "x[%d]/y[%d] = ", i, i
28=>condition: 印出"%d/%d = ", x[i], y[i]
29=>condition: 印出x[i] / y[i]
30=>operation: ArrayIndexOutOfBoundsException
31=>inputoutput: 超出陣列
32=>operation: ArithmeticException
33=>inputoutput: 除數不能為0
end=>end: 結束

start->9->14->15->16->17->18(no)->24->25(yes)->27->28(yes)->29(yes)->end
18(yes)->19->20->21->22->24
25(no)->end
28(no)->30->31(right)->25
29(no)->32->33(right)->25
``` -->

<!-- ```flow
start=>start: 開始
9=>operation: import java.util.Scanne
14=>operation: 創建sc(scanner)
15=>operation: x = { 10, 20, 30 }
16=>operation: y = { 5, 10, 0 }
17=>inputoutput: 執行四次(嘗試超出陣列範圍)
18=>condition: for (int i = 0; i <= 3; i++)
20=>inputoutput: "x[%d]/y[%d] = ", i, i
21=>condition: 印出"%d/%d = ", x[i], y[i]
22=>condition: 印出x[i] / y[i]
23=>operation: ArrayIndexOutOfBoundsException
24=>inputoutput: 超出陣列
25=>operation: ArithmeticException
26=>inputoutput: 除數不能為0
end=>end: 結束

start->9->14->15->16->17->18(yes)->20->21(yes)->22(yes)->end
18(no)->end
21(no)->23->24(right)->18
22(no)->25->26(right)->18
``` -->

<!-- ```flow
start=>start: 開始
9=>operation: import java.util.Scanner
14=>operation: 創建sc(scanner)
15=>inputoutput: Input: 
16=>operation: sc掃入並轉換陣列
17=>operation: string陣列轉成int陣列
20=>operation: int x陣列最大值為5
21=>operation: int j=0
22=>condition: String k: str[0].split("")
23=>condition: 把陣列內數字嘗試塞進x
26=>condition: printf "%d / %d = %d\n", 
number[0], number[1]
, number[0] / number[1]
27=>inputoutput: 正確運行
28=>operation: ArrayIndexOutOfBoundsException
29=>inputoutput: 超出陣列
30=>operation: ArithmeticException
31=>inputoutput: 除數不能為0
end=>end: 結束
start->9->14->15->16->17->20->21->22(yes)->23(yes)->26(yes)->27->end
22(no)->end
23(no)->28->29(right)->22
26(no)->30->31(right)->22
``` -->

<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_81_flowchart.png?raw=true" width="600">
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_82_flowchart.png?raw=true" width="600">
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_83_flowchart.png?raw=true" width="600">

---

## 程式碼 ##

### 三種擇一 ###
```java
/*
filename:homework_8
function:try catch finally

author:taeyeonssudpate
time:2020/12/21
*/

import java.util.Scanner;

public class homework_81 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] x = { 10, 20, 30 };
        int[] y = { 5, 10, 0 };
        System.out.println("執行四次(嘗試超出陣列範圍)");
        for (int i = 0; i <= 3; i++) {
            try {
                System.out.printf("x[%d]/y[%d] = ", i, i);
                System.out.printf("%d/%d = ", x[i], y[i]);
                System.out.println(x[i] / y[i]);
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("超出陣列");
            } catch (ArithmeticException e) {
                System.out.println("除數不能為0");
            }
        }
    }
}
```

```java
/*
filename:homework_8
function:try catch finally

author:taeyeonssudpate
time:2020/12/21
*/

import java.util.Scanner;

public class homework_82 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] x = new int[3];
        int[] y = new int[3];
        System.out.println("數入x,y陣列值(3)");
        for (int i = 0; i < 3; i++) {
            System.out.printf("Please input x[%d]: ", i);
            x[i] = sc.nextInt();
            System.out.printf("Please input y[%d]: ", i);
            y[i] = sc.nextInt();
        }
        System.out.println("執行四次(嘗試超出陣列範圍)");
        for (int i = 0; i <= 3; i++) {
            try {
                System.out.printf("x[%d]/y[%d] = ", i, i);
                System.out.printf("%d/%d = ", x[i], y[i]);
                System.out.println(x[i] / y[i]);
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("超出陣列");
            } catch (ArithmeticException e) {
                System.out.println("除數不能為0");
            }
        }
    }
}
```

```java
/*
filename:homework_83
function:try catch finally

author:taeyeonssudpate
time:2020/12/21
*/

import java.util.Scanner;

public class homework_83 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // create scanner
        System.out.printf("Input: ");
        String[] str = sc.nextLine().split("/"); // "12345/10" >> {"12345","10"}
        int[] number = { Integer.parseInt(str[0]), Integer.parseInt(str[1]) }; // str >> int {12345,10}
        
        int[] x = new int[5]; // 固定為5
        int j = 0;
        try {
            for (String k : str[0].split("")) {
                x[j++] = Integer.parseInt(k); // 嘗試塞入引發陣列錯誤
            }

            System.out.printf("%d / %d = %d\n", number[0], number[1], number[0] / number[1]); // 除法
            System.out.println("正確運行");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("超出陣列");
        } catch (ArithmeticException e) {
            System.out.println("除數不能為0");
        }
    }
}
```

---
---
---
---

[第七次作業](https://github.com/taeyeonssupdate/zerojudge/blob/master/school/java1/homework_7.md) <br>
[第六次作業](https://github.com/taeyeonssupdate/zerojudge/blob/master/school/java1/homework_6.md) <br>
[第五次作業](https://github.com/taeyeonssupdate/zerojudge/blob/master/school/java1/homework_5.md) <br>
[第四次作業](https://github.com/taeyeonssupdate/zerojudge/blob/master/school/java1/homework_4.md) <br>
[第三次作業](https://github.com/taeyeonssupdate/zerojudge/blob/master/school/java1/homework_3/homework_3.md) <br>
[第二次作業](https://github.com/taeyeonssupdate/zerojudge/blob/master/school/java1/homework_2.md) <br>
[第一次作業](https://github.com/taeyeonssupdate/zerojudge/blob/master/school/java1/homework_1.md) <br>