#include "pch.h"
#include "CppUnitTest.h"
#include "../raytracer/src/headers/vector.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace raytracertest
{
	TEST_CLASS(raytracertest)
	{
	public:
		
		/*
		Vector2 operator +(const Vector2& a, const Vector2& b);
		Vector3 operator +(const Vector3& a, const Vector3& b);
		Vector4 operator +(const Vector4& a, const Vector4& b);
		*/
		TEST_METHOD(test_vector_addition) {
			Vector2 a(1, 2);
			Vector2 b(3, 4);
			Vector3 c(1, 2, 3);
			Vector3 d(4, 5, 6);
			Vector4 e(1, 2, 3, 4);
			Vector4 f(5, 6, 7, 8);

			Assert::AreEqual(a + b, Vector2(4, 6));
			Assert::AreEqual(c + d, Vector3(5, 7, 9));
			Assert::AreEqual(e + f, Vector4(6, 8, 10, 12));
		}

		/*
		Vector2 operator +(const Vector2& v, float s);
		Vector3 operator +(const Vector3& v, float s);
		Vector4 operator +(const Vector4& v, float s);
		*/
		TEST_METHOD(test_scalar_addition) {
			Vector2 a(1, 2);
			Vector3 b(1, 2, 3);
			Vector4 c(1, 2, 3, 4);
			float s = 5;

			Assert::AreEqual(a + s, Vector2(6, 7));
			Assert::AreEqual(b + s, Vector3(6, 7, 8));
			Assert::AreEqual(c + s, Vector4(6, 7, 8, 9));
		}

		/*
		Vector2 operator -(const Vector2& a, const Vector2& b);
		Vector3 operator -(const Vector3& a, const Vector3& b);
		Vector4 operator -(const Vector4& a, const Vector4& b);
		*/
		TEST_METHOD(test_vector_subtraction) {
			Vector2 a(1, 2);
			Vector2 b(3, 4);
			Vector3 c(1, 2, 3);
			Vector3 d(4, 5, 6);
			Vector4 e(1, 2, 3, 4);
			Vector4 f(5, 6, 7, 8);

			Assert::AreEqual(a + b, Vector2(-2, -2));
			Assert::AreEqual(c + d, Vector3(-3, -3, -3));
			Assert::AreEqual(e + f, Vector4(-4, -4, -4, -4));
		}

		/*
		Vector2 operator -(const Vector2& v, float s);
		Vector3 operator -(const Vector3& v, float s);
		Vector4 operator -(const Vector4& v, float s);
		*/
		TEST_METHOD(test_scalar_subtraction) {
			Vector2 a(1, 2);
			Vector3 b(1, 2, 3);
			Vector4 c(1, 2, 3, 4);
			float s = 5;

			Assert::AreEqual(a - s, Vector2(-4, -3));
			Assert::AreEqual(b - s, Vector3(-4, -3, -2));
			Assert::AreEqual(c - s, Vector4(-4, -3, -2, -1));
		}

		/*
		Vector2 operator -(const Vector2& v);
		Vector3 operator -(const Vector3& v);
		Vector4 operator -(const Vector4& v);
		*/
		TEST_METHOD(test_vector_negation) {
			Vector2 a(1, 2);
			Vector3 b(1, 2, 3);
			Vector4 c(1, 2, 3, 4);

			Assert::AreEqual(-a, Vector2(-1, -2));
			Assert::AreEqual(-b, Vector3(-1, -2, -3));
			Assert::AreEqual(-c, Vector4(-1, -2, -3, -4));
		}

		/*
		Vector2 operator *(const Vector2& a, const Vector2& b);
		Vector3 operator *(const Vector3& a, const Vector3& b);
		Vector4 operator *(const Vector4& a, const Vector4& b);
		*/
		TEST_METHOD(test_vector_multiplication) {
			Vector2 a(1, 2);
			Vector2 b(3, 4);
			Vector3 c(1, 2, 3);
			Vector3 d(4, 5, 6);
			Vector4 e(1, 2, 3, 4);
			Vector4 f(5, 6, 7, 8);

			Assert::AreEqual(a * b, Vector2(3, 8));
			Assert::AreEqual(c * d, Vector3(4, 10, 18));
			Assert::AreEqual(e * f, Vector4(5, 12, 21, 32));
		}

		/*
		Vector2 operator *(const Vector2& v, float s);
		Vector3 operator *(const Vector3& v, float s);
		Vector4 operator *(const Vector4& v, float s);
		*/
		TEST_METHOD(test_scalar_multiplication) {
			Vector2 a(1, 2);
			Vector3 b(1, 2, 3);
			Vector4 c(1, 2, 3, 4);
			float s = 5;

			Assert::AreEqual(a * s, Vector2(5, 10));
			Assert::AreEqual(b * s, Vector3(5, 10, 15));
			Assert::AreEqual(c * s, Vector4(5, 10, 15, 20));
		}

		/*
		Vector2 operator /(const Vector2& a, const Vector2& b);
		Vector3 operator /(const Vector3& a, const Vector3& b);
		Vector4 operator /(const Vector4& a, const Vector4& b);
		*/
		TEST_METHOD(test_vector_division) {
			Vector2 a(1, 2);
			Vector2 b(3, 4);
			Vector3 c(1, 2, 3);
			Vector3 d(4, 5, 6);
			Vector4 e(1, 2, 3, 4);
			Vector4 f(5, 6, 7, 8);

			Assert::AreEqual(a / b, Vector2(0.3333333f, 0.5f));
			Assert::AreEqual(c / d, Vector3(0.25f, 0.4f, 0.5f));
			Assert::AreEqual(e / f, Vector4(0.2f, 0.3333333f, 0.4285713f, 0.5f));
		}

		/*
		Vector2 operator /(const Vector2& v, float s);
		Vector3 operator /(const Vector3& v, float s);
		Vector4 operator /(const Vector4& v, float s);
		*/
		TEST_METHOD(test_scalar_division) {
			Vector2 a(1, 2);
			Vector3 b(1, 2, 3);
			Vector4 c(1, 2, 3, 4);
			float s = 5;

			Assert::AreEqual(a / s, Vector2(0.2f, 0.4f));
			Assert::AreEqual(b / s, Vector3(0.2f, 0.4f, 0.6f));
			Assert::AreEqual(c / s, Vector4(0.2f, 0.4f, 0.6f, 0.8f));
		}

		/*
		bool operator ==(const Vector2& l, const Vector2& r);
		bool operator ==(const Vector3& l, const Vector3& r);
		bool operator ==(const Vector4& l, const Vector4& r);
		*/
		TEST_METHOD(test_equality) {
			Vector2 a(1, 2);
			Vector2 b(3, 4);
			Vector3 c(1, 2, 3);
			Vector3 d(4, 5, 6);
			Vector4 e(1, 2, 3, 4);
			Vector4 f(5, 6, 7, 8);

			Assert::IsTrue(a == a);
			Assert::IsFalse(a == b);
			Assert::IsTrue(c == c);
			Assert::IsFalse(c == d);
			Assert::IsTrue(e == e);
			Assert::IsFalse(e == f);
		}

		/*
		bool operator !=(const Vector2& l, const Vector2& r);
		bool operator !=(const Vector3& l, const Vector3& r);
		bool operator !=(const Vector4& l, const Vector4& r);
		*/
		TEST_METHOD(test_inequality) {
			Vector2 a(1, 2);
			Vector2 b(3, 4);
			Vector3 c(1, 2, 3);
			Vector3 d(4, 5, 6);
			Vector4 e(1, 2, 3, 4);
			Vector4 f(5, 6, 7, 8);

			Assert::IsFalse(a != a);
			Assert::IsTrue(a != b);
			Assert::IsFalse(c != c);
			Assert::IsTrue(c != d);
			Assert::IsFalse(e != e);
			Assert::IsTrue(e != f);
		}

		/*
		Vector2 normalized_vector(const Vector2& v);
		Vector3 normalized_vector(const Vector3& v);
		Vector4 normalized_vector(const Vector4& v);
		*/
		TEST_METHOD(test_normalization) {
			Vector2 a(1, 2);
			Vector3 b(1, 2, 3);
			Vector4 c(1, 2, 3, 4);

			Assert::AreEqual(normalized_vector(a), Vector2(0.4472135f, 0.8944271f));
			Assert::AreEqual(normalized_vector(b), Vector3(0.2672612f, 0.5345224f, 0.8017837f));
			Assert::AreEqual(normalized_vector(c), Vector4(0.1825741f, 0.3651483f, 0.5477225f, 0.7302967f));
		}

		/*
		float magnitude(const Vector2& v);
		float magnitude(const Vector3& v);
		float magnitude(const Vector4& v);
		*/
		TEST_METHOD(test_magnitude) {
			Vector2 a(1, 2);
			Vector3 b(1, 2, 3);
			Vector4 c(1, 2, 3, 4);

			Assert::AreEqual(magnitude(a), 2.2360679f);
			Assert::AreEqual(magnitude(b), 3.7416573f);
			Assert::AreEqual(magnitude(c), 5.4772255f);
		}

		/*
		float dot_product(const Vector2& a, const Vector2& b);
		float dot_product(const Vector3& a, const Vector3& b);
		float dot_product(const Vector4& a, const Vector4& b);
		*/
		TEST_METHOD(test_dot_product) {
			Vector2 a(1, 2);
			Vector2 b(3, 4);
			Vector3 c(1, 2, 3);
			Vector3 d(4, 5, 6);
			Vector4 e(1, 2, 3, 4);
			Vector4 f(5, 6, 7, 8);

			Assert::AreEqual(dot_product(a, b), 11.0f);
			Assert::AreEqual(dot_product(c, d), 32.0f);
			Assert::AreEqual(dot_product(e, f), 70.0f);
		}

		// Vector3 cross_product(const Vector3& a, const Vector3& b);
		TEST_METHOD(test_cross_product) {
			Vector3 a(1, 2, 3);
			Vector3 b(4, 5, 6);

			Assert::AreEqual(cross_product(a, b), Vector3(-3, 6, -3));
		}

		/*
		Vector2 projection(const Vector2& a, const Vector2& b);
		Vector3 projection(const Vector3& a, const Vector3& b);
		Vector4 projection(const Vector4& a, const Vector4& b);
		*/
		TEST_METHOD(test_projection) {
			Vector2 a(1, 2);
			Vector2 b(3, 4);
			Vector3 c(1, 2, 3);
			Vector3 d(4, 5, 6);
			Vector4 e(1, 2, 3, 4);
			Vector4 f(5, 6, 7, 8);

			Assert::AreEqual(projection(a, b), Vector2(1.32f, 1.76f));
			Assert::AreEqual(projection(c, d), Vector3(1.6623376f, 2.0779221f, 2.4935065f));
			Assert::AreEqual(projection(e, f), Vector4(2.0114943f, 2.4137931f, 2.8160920f, 3.2183908f));
		}

		/*
		Vector2 rejection(const Vector2& a, const Vector2& b);
		Vector3 rejection(const Vector3& a, const Vector3& b);
		Vector4 rejection(const Vector4& a, const Vector4& b);
		*/
		TEST_METHOD(test_rejection) {
			Vector2 a(1, 2);
			Vector2 b(3, 4);
			Vector3 c(1, 2, 3);
			Vector3 d(4, 5, 6);
			Vector4 e(1, 2, 3, 4);
			Vector4 f(5, 6, 7, 8);

			Assert::AreEqual(rejection(a, b), Vector2(-0.32f, 0.24f));
			Assert::AreEqual(rejection(c, d), Vector3(-0.6623376f, -0.0779221f, 0.5064935f));
			Assert::AreEqual(rejection(e, f), Vector4(-1.0114943f, -0.4137931f, 0.183908f, 0.7816092f));
		}

		/*
		Vector2 reflection(const Vector2& a, const Vector2& b);
		Vector3 reflection(const Vector3& a, const Vector3& b);
		Vector4 reflection(const Vector4& a, const Vector4& b);
		*/
		TEST_METHOD(test_reflection) {
			Vector2 a(1, 2);
			Vector2 b(3, 4);
			Vector3 c(1, 2, 3);
			Vector3 d(4, 5, 6);
			Vector4 e(1, 2, 3, 4);
			Vector4 f(5, 6, 7, 8);

			Assert::AreEqual(rejection(a, b), Vector2(-65, -86));
			Assert::AreEqual(rejection(c, d), Vector3(-255, -318, -377));
			Assert::AreEqual(rejection(e, f), Vector4(-699, -838, -977, -1116));
		}

		/*
		float angle(const Vector2& a, const Vector2& b);
		float angle(const Vector3& a, const Vector3& b);
		float angle(const Vector4& a, const Vector4& b);
		*/
		TEST_METHOD(test_angle) {
			Vector2 a(1, 2);
			Vector2 b(3, 4);
			Vector3 c(1, 2, 3);
			Vector3 d(4, 5, 6);
			Vector4 e(1, 2, 3, 4);
			Vector4 f(5, 6, 7, 8);

			Assert::AreEqual(angle(a, b), 0.1798535f);
			Assert::AreEqual(angle(c, d), 0.2257261f);
			Assert::AreEqual(angle(e, f), 0.2257261f);
		}

		/*
		float distance(const Vector2& a, const Vector2& b);
		float distance(const Vector3& a, const Vector3& b);
		float distance(const Vector4& a, const Vector4& b);
		*/
		TEST_METHOD(test_distance) {
			Vector2 a(1, 2);
			Vector2 b(3, 4);
			Vector3 c(1, 2, 3);
			Vector3 d(4, 5, 6);
			Vector4 e(1, 2, 3, 4);
			Vector4 f(5, 6, 7, 8);

			Assert::AreEqual(distance(a, b), 2.8284271f);
			Assert::AreEqual(distance(c, d), 5.1961524f);
			Assert::AreEqual(distance(e, f), 8.0f);
		}
	};
}
