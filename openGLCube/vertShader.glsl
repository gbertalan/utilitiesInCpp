#version 330
layout (location=0) in vec3 position; // incoming 3 values (one vertex), with the ID 0.
										// this variable is called vertex attribute variable
// out vec4 gl_Position; we can comment this out, because it is built-in.

uniform mat4 mv_matrix;
uniform mat4 proj_matrix;
out vec4 varyingColor;
void main(void)
{ gl_Position = proj_matrix * mv_matrix * vec4(position,1.0);
varyingColor = vec4(position,1.0) * 0.5 + vec4(0.5, 0.5, 0.5, 0.5);
}
