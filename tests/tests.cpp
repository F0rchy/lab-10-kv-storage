// Copyright 2022 Artem Artemov <theartemka6@mail.ru>

#include <gtest/gtest.h>

#include <kv-storage.hpp>
#include <stdexcept>

TEST(Example, EmptyTest) { EXPECT_THROW(example(), std::runtime_error); }
