#include <boost/test/unit_test.hpp>

#include <boost/gil/gil_all.hpp>
#include <boost/gil/extension/toolbox/color_converters/rgb_to_luminance.hpp>

using namespace boost;
using namespace gil;

struct double_zero { static double apply() { return 0.0; } };
struct double_one  { static double apply() { return 1.0; } };

typedef scoped_channel_value< double, double_zero, double_one > bits64f;

typedef pixel< double, gray_layout_t > gray64f_pixel_t;
typedef pixel< double, rgb_layout_t  > rgb64f_pixel_t;

BOOST_AUTO_TEST_SUITE( rgb_to_luminance_test )

BOOST_AUTO_TEST_CASE( rgb_to_luminance_test )
{
    rgb64f_pixel_t a( 10, 20, 30 );
    gray64f_pixel_t b;

    color_convert( a, b );
}

BOOST_AUTO_TEST_SUITE_END()
