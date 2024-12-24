#include "Stack.h"
#include <gtest.h>

// --------------- Positive tests ------------- //

TEST(Stack, can_create_default_stack) {
	ASSERT_NO_THROW(Stack<int> arr());
}

TEST(Stack, can_create_stack_positive_length) {
	ASSERT_NO_THROW(Stack<int> arr(9));
}

TEST(Stack, can_create_stack_same_val) {
	ASSERT_NO_THROW(Stack<int>(2, 3));
}

TEST(Stack, can_get_size) {
	Stack<int> arr(3);
	EXPECT_EQ(3, arr.get_size());

}

TEST(Stack, get_top_value) {
	Stack<int> arr(1, 1);
	EXPECT_EQ(1, arr.top());
}

TEST(Stack, can_push_val) {
	Stack<int> arr(2);
	arr.push(3);
	EXPECT_EQ(3, arr.top());
}

TEST(Stack, change_size_push) {
	Stack<int> arr(2);
	arr.push(3);
	EXPECT_EQ(3, arr.get_size());
}

TEST(Stack, can_pop_value) {
	Stack<int> arr(3, 1);
	arr.push(4);
	arr.pop();
	EXPECT_EQ(1, arr.top());
}

TEST(Stack, change_size_pop) {
	Stack<int>arr(3);
	arr.pop();
	EXPECT_EQ(2, arr.get_size());
}


TEST(Stack, chek_empty) {
	Stack<int> arr;
	EXPECT_EQ(1, arr.empty());
}

// --------------- Negative tests ------------- //

TEST(Stack, throw_create_negative_len) {
	ASSERT_ANY_THROW(Stack<int> arr1(-2));
}

TEST(Stack, throw_pop_val_empty) {
	Stack<int> arr;
	ASSERT_ANY_THROW(arr.pop());

}

TEST(Stack, throw_top_val_empty) {
	Stack<int> arr;
	ASSERT_ANY_THROW(arr.top());
}