//adopted from Osiris.
void ohk:main(ClientFrameStage_t stage)
{
	auto cl_righthand = cvar->get("cl_righthand");
	auto weapon_knife = //knife check
  bool var;

	if (stage == ClientFrameStage_t::FRAME_RENDER_START)
	{
		var = cl_righthand->Get();

		if (!main checkbox)
		{
			cl_righthand->SetValue(var);
			return;
		}

		if (weapon_knife)
		{
			cl_righthand->SetValue(!var);
		}
	}
	else
	{
		cl_righthand->SetValue(var);
	}
}
