// Copyright 2021 by shaidi

TEST (MyStack, test1) {
    MyStack<int> st(6);
    EXPECT_EQ(1, st.isEmpty());
}

TEST (MyStack, test2) {
    MyStack<int> st(3);
    st.push(4);
    st.push(10);
    EXPECT_EQ(0, st.isEmpty());
}

TEST (MyStack, test3) {
    MyStack<int> st(2);
    st.push(1);
    st.push(2);
    EXPECT_EQ(1, st.isFull());
}

TEST (MyStack, test4) {
    MyStack<int> st(3);
    st.push(1);
    st.push(2);
    EXPECT_EQ(0, st.isFull());
}

TEST (MyStack, test5) {
    MyStack<int> st(3);
    st.push(4);
    EXPECT_EQ(4, st.get());
}

TEST (MyStack, test6) {
    MyStack<int> st(3);
    st.push(4);
    st.push(10);
    EXPECT_EQ(10, st.get());
}

TEST (MyStack, test7) {
    MyStack<int> st(3);
    st.push(4);
    st.push(10);
    st.pop();
    EXPECT_EQ(4, st.get());
}

TEST (MyStack, test8) {
    MyStack<int> st(5);
    st.push(4);
    st.push(10);
    st.pop();
    st.pop();
    EXPECT_EQ(1, st.isEmpty());
}

TEST (MyStack, test9) {
    MyStack<int> st(2);
    st.push(4);
    st.push(10);
    st.pop();
    EXPECT_EQ(0, st.isFull());
}

TEST (MyStack, test10) {
    MyStack<int> st(5);
    st.push(4);
    st.push(10);
    st.pop();
    st.push(15);
    EXPECT_EQ(15, st.get());
}