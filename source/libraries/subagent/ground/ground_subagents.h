#ifndef GROUND_SUBAGENTS_H
#define GROUND_SUBAGENTS_H

#include "support/configCosmos.h"
#include "agent/agentclass.h"
#include "module/file_module.h"
#include "module/websocket_module.h"

namespace ProjectName
{
    namespace Ground
    {
        namespace SubAgent
        {
            int32_t init_subagents(Agent *agent);

            // Externs defined in obc_subagents.cpp

            // References to commonly used node ids
            extern NODE_ID_TYPE node0_node_id;
            extern NODE_ID_TYPE ground_node_id;

            // File subagent
            extern thread file_thread;
            extern Cosmos::Module::FileModule* file_module;
            // Websocket subagent
            extern thread websocket_thread;
            extern Cosmos::Module::WebsocketModule* websocket_module;
        }
    }
}

#endif // GROUND_SUBAGENTS_H
