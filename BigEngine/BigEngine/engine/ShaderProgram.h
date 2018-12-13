#pragma once

#include <string>

namespace Big
{
	class ShaderProgram
	{
	public:
		ShaderProgram();
		~ShaderProgram();

		enum ShaderType
		{
			Vertex,
			Fragment
		};

		bool Create();
		void Destroy();
		void Use();

		bool LoadShader(const std::string& uri, ShaderType ShaderType);

	private:

		unsigned int handle;

		bool CheckShaderError(unsigned int shader);
		bool CheckProgramError();

	};

}
