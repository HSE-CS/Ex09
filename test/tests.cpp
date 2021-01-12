#include "gtest/gtest.h"
#include "MyStack.h"
#include <string>

TEST(Test, test1) 
{
	MyStack<int> st(1);
	st.push(525);
	EXPECT_EQ(525, st.get());
}
