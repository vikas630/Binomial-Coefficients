#define CATCH_CONFIG_MAIN
#include "../src/binomial.hpp"
#include"catch.hpp"

TEST_CASE("Testing bio-1"){
   INTERNAL_CATCH_TEST( "REQUIRE", Catch::ResultDisposition::Normal, bio(5,2)== 10 );
   REQUIRE_FALSE(bio(5,2) != 10);
}
TEST_CASE("Testing bio-2"){
   INTERNAL_CATCH_TEST( "REQUIRE", Catch::ResultDisposition::Normal, bio(8,3)== 56 );
   REQUIRE_FALSE(bio(8,3) != 56);
}
TEST_CASE("Testing bio-3"){
   INTERNAL_CATCH_TEST( "REQUIRE", Catch::ResultDisposition::Normal, bio(5,5)== 1 );
   REQUIRE_FALSE(bio(5,5) != 1);
}
TEST_CASE("Testing bio-4"){
   INTERNAL_CATCH_TEST( "REQUIRE", Catch::ResultDisposition::Normal, bio(20,0)==1 );
   REQUIRE_FALSE(bio(20,0) != 1);
}  
TEST_CASE("Testing bio-5"){
   INTERNAL_CATCH_TEST( "REQUIRE", Catch::ResultDisposition::Normal, bio(20,19)==20);
   REQUIRE_FALSE(bio(20,19) != 20);
}
TEST_CASE("Testing bio-6"){
   INTERNAL_CATCH_TEST( "REQUIRE", Catch::ResultDisposition::Normal, bio(50,47)==19600);
   REQUIRE_FALSE(bio(50,47) != 19600);
}