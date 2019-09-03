cmake_minimum_required(VERSION 2.6)
project(myapp-test)

# Google TestのCMakeプロジェクトを追加し、Google Testをビルド
# ※v1.7以前はディレクトリ構成が異なる
add_subdirectory(lib/googletest/googletest)

# MyApp.cppを識別名"myapp"でコンパイル
add_library(myapp ../MyApp.cpp)
# MyAppTest.cppからmyapp-test実行ファイルをビルド
add_executable(myapp-test MyAppTest.cpp)
# ライブラリをリンクする
target_link_libraries(myapp-test myapp gtest_main)