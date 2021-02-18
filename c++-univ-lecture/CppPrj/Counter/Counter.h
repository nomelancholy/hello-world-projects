#ifndef COUNTER_H_INCLUDED

#define COUNTER_H_INCLUDED

class Counter {
    int value;

public:
    Counter() {
        // 생성자
        value = 0;
    }

    void reset() {
        value = 0;
    }
    void count() {
        ++value;
    }
    int getValue() const {
        // 데이터 멤버의 값을 수정하지 않는 멤버함수
        return value;
    }
};

#endif COUNTER_H_INCLUDED