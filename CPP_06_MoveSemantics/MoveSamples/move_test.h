#pragma once

#include <chrono>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

// source: https://leimao.github.io/blog/CPP-Effective-Move-Semantics/
// see also: https://scottmeyers.blogspot.com/2012/04/stdstring-sso-and-move-semantics.html
// and: https://leimao.github.io/blog/CPP-lvalue-rvalue-Reference/#Example-2

std::string create_string(size_t n)
{
	std::string str{ "" };
	for (size_t i = 0; i < n; ++i)
	{
		str += "a";
	}
	return str;
}

int move_test()
{
	// Short string length
	// test with lenght: 7, 15, 50, 100, 200
	size_t len_ss = 200;
	
	// Test size
	const size_t num_ss = 100000;
	
	// Create a vector of short strings
	std::vector<std::string> vec_ss_source(num_ss);
	std::vector<std::string> vec_ss_copy_target(num_ss);
	std::vector<std::string> vec_ss_move_target(num_ss);
	for (size_t i = 0; i < num_ss; ++i)
	{
		vec_ss_source[i] = create_string(len_ss);
	}

	std::chrono::steady_clock::time_point t_copy_begin =
		std::chrono::steady_clock::now();
	for (size_t i = 0; i < num_ss; ++i)
	{
		vec_ss_copy_target[i] = vec_ss_source[i];
	}
	std::chrono::steady_clock::time_point t_copy_end =
		std::chrono::steady_clock::now();

	std::chrono::steady_clock::time_point t_move_begin =
		std::chrono::steady_clock::now();
	for (size_t i = 0; i < num_ss; ++i)
	{
		vec_ss_move_target[i] = std::move(vec_ss_source[i]);
	}
	std::chrono::steady_clock::time_point t_move_end =
		std::chrono::steady_clock::now();

	std::cout << "String length: " << len_ss << std::endl;
	std::cout << "String copy assignment average time: "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(
			t_copy_end - t_copy_begin)
		.count() /
		static_cast<float>(num_ss)
		<< "[ns]" << std::endl;
	std::cout << "String move assignment average time: "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(
			t_move_end - t_move_begin)
		.count() /
		static_cast<float>(num_ss)
		<< "[ns]" << std::endl;
	
	return 0;
}