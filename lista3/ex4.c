#include <stdio.h>

int main()
{
	int vec1[6];
	int vec2[6];
	int vec3[6];
	int vec4[6];

	for(size_t i = 0; i < 6; i++) {
		printf("Enter position %zu of vector 1: ", i);
		scanf("%d", &vec1[i]);
	}

	for(size_t i = 0; i < 6; i++) {
		printf("Enter position %zu of vector 2: ", i);
		scanf("%d", &vec2[i]);
	}

	for(size_t i = 0; i < 6; i++) {
		printf("Enter position %zu of vector 3: ", i);
		scanf("%d", &vec3[i]);
	}

	vec4[0] = vec1[0];
	vec4[1] = vec1[1];
	vec4[2] = vec2[2];
	vec4[3] = vec2[3];
	vec4[4] = vec3[4];
	vec4[5] = vec3[5];

	for (size_t i = 0; i < 6; i++) {
		printf("%d\n", vec4[i]);
	}

	return 0;
}
