# DS_Project_2_2024_2
### 2024-2 Data Structure Project #2
Due date: 2024/11/17 23h 59m 59s.

## <u>**Notice**</u> 
##### 윈도우 --> 리눅스로 단순 파일 복사 및 드래그는 파일 인코딩 변환 문제 발생 할 수 있습니다.
##### 반드시 리눅스 환경에서 파일을 재생성 후 테스트 바랍니다!!
##### 설계와 실습을 모두 수강하시는 분은 실습 과제제출란에만 제출 해주시면 됩니다 !!

--------------------------

### 1. 프로젝트 문서 및 소스코드 수정사항
#### [2024_DS_Project2_v1.pdf](https://github.com/jisanggeun/DS_Project2_2024_2/raw/main/2024_DS_Project2_v2.pdf)
```
10/07 - ver1 업로드
```

### 2. 자주들어오는 질문 

**Q. command.txt와 input_data.txt는 제공하지 않나요?**

A. 네. 따로 제공하지 않습니다.

--------------------------

### Requirement
##### 먼저 해당 github에 저장되어 있는 base 코드를 다운받는다.
```
$ git clone https://github.com/jisanggeun/DS_Project_2_2024_2.git
$ cd DS_Project_2_2024_2
```

### how to compile this project
```
$ make
```

### how to run code
##### ./(생성된 실행파일) 의 형식으로 생성된 run 실행파일을 실행한다.
##### 실행하면 결과로 log.txt파일이 생성되면서 결과가 log.txt 에 저장된다. 
```
$ ./run
```

### how to make tar.gz
##### 압축할 파일들은 하나의 디렉토리에 모아두고 tar 명령어를 실행한다.
```
$ ls
AVLNode.h    AVLTree.h   BpTreeDataNode.h  BpTreeIndexNode.h  main.cpp  Manager.cpp  FlightData.h
AVLTree.cpp  BpTree.cpp  BpTree.h          BpTreeNode.h       Makefile  Manager.h

$ tar -czvf 20232020XX_DS_project2.tar.gz *
AVLNode.h
AVLTree.cpp
AVLTree.h
BpTree.cpp
BpTreeDataNode.h
BpTree.h
BpTreeIndexNode.h
BpTreeNode.h
main.cpp
Makefile
Manager.cpp
Manager.h
FlightData.h
```

### how to decompress tar.gz
##### tar.gz 파일이 잘 압축되었는지 확인하기 위해 실행한다.
```
$ ls
20232020XX_DS_project2.tar.gz

$ tar -xzvf 2020202001_DS_project1.tar.gz
AVLNode.h
AVLTree.cpp
AVLTree.h
BpTree.cpp
BpTreeDataNode.h
BpTree.h
BpTreeIndexNode.h
BpTreeNode.h
main.cpp
Makefile
Manager.cpp
Manager.h
FlightData.h
```



