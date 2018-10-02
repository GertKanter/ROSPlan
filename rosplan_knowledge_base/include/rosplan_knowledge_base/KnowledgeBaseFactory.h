//
// Created by Gerard Canal on 24/09/18.
//

#ifndef ROSPLAN_KNOWLEDGE_BASE_KNOWLEDGEBASEFACTORY_H
#define ROSPLAN_KNOWLEDGE_BASE_KNOWLEDGEBASEFACTORY_H

#include "rosplan_knowledge_base/KnowledgeBase.h"
#include "rosplan_knowledge_base/PDDLKnowledgeBase.h"
#include "rosplan_knowledge_base/RDDLKnowledgeBase.h"
#include "rosplan_knowledge_base/PPDDLKnowledgeBase.h"

namespace KCL_rosplan {
    typedef std::unique_ptr<KnowledgeBase> KnowledgeBasePtr;

    class KnowledgeBaseFactory {
    public:
        enum KB {
            PDDL,
            PPDDL,
            RDDL
        };

        static KnowledgeBasePtr createKB(KB kb_type);
    };
}

#endif //ROSPLAN_KNOWLEDGE_BASE_KNOWLEDGEBASEFACTORY_H
