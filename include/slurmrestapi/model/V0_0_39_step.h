/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_39_step.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_step_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_step_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_step_CPU.h"
#include "slurmrestapi/model/V0_0_39_step_step.h"
#include "slurmrestapi/model/V0_0_39_step_time.h"
#include "slurmrestapi/model/V0_0_39_step_tres.h"
#include <cpprest/details/basic_types.h>
#include "slurmrestapi/model/V0_0_39_step_nodes.h"
#include "slurmrestapi/model/V0_0_39_step_statistics.h"
#include "slurmrestapi/model/V0_0_39_step_task.h"
#include "slurmrestapi/model/V0_0_39_job_exit_code.h"
#include "slurmrestapi/model/V0_0_39_step_tasks.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_39_step_time;
class V0_0_39_job_exit_code;
class V0_0_39_step_nodes;
class V0_0_39_step_tasks;
class V0_0_39_step_CPU;
class V0_0_39_step_statistics;
class V0_0_39_step_step;
class V0_0_39_step_task;
class V0_0_39_step_tres;


/// <summary>
/// 
/// </summary>
class  V0_0_39_step
    : public ModelBase
{
public:
    V0_0_39_step();
    virtual ~V0_0_39_step();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_step members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_step_time> getTime() const;
    bool timeIsSet() const;
    void unsetTime();

    void setTime(const std::shared_ptr<V0_0_39_step_time>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_job_exit_code> getExitCode() const;
    bool exitCodeIsSet() const;
    void unsetExit_code();

    void setExitCode(const std::shared_ptr<V0_0_39_job_exit_code>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_step_nodes> getNodes() const;
    bool nodesIsSet() const;
    void unsetNodes();

    void setNodes(const std::shared_ptr<V0_0_39_step_nodes>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_step_tasks> getTasks() const;
    bool tasksIsSet() const;
    void unsetTasks();

    void setTasks(const std::shared_ptr<V0_0_39_step_tasks>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPid() const;
    bool pidIsSet() const;
    void unsetPid();

    void setPid(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_step_CPU> getCPU() const;
    bool cPUIsSet() const;
    void unsetCPU();

    void setCPU(const std::shared_ptr<V0_0_39_step_CPU>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getKillRequestUser() const;
    bool killRequestUserIsSet() const;
    void unsetKill_request_user();

    void setKillRequestUser(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getState() const;
    bool stateIsSet() const;
    void unsetState();

    void setState(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_step_statistics> getStatistics() const;
    bool statisticsIsSet() const;
    void unsetStatistics();

    void setStatistics(const std::shared_ptr<V0_0_39_step_statistics>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_step_step> getStep() const;
    bool stepIsSet() const;
    void unsetStep();

    void setStep(const std::shared_ptr<V0_0_39_step_step>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_step_task> getTask() const;
    bool taskIsSet() const;
    void unsetTask();

    void setTask(const std::shared_ptr<V0_0_39_step_task>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_step_tres> getTres() const;
    bool tresIsSet() const;
    void unsetTres();

    void setTres(const std::shared_ptr<V0_0_39_step_tres>& value);


protected:
    std::shared_ptr<V0_0_39_step_time> m_Time;
    bool m_TimeIsSet;
    std::shared_ptr<V0_0_39_job_exit_code> m_Exit_code;
    bool m_Exit_codeIsSet;
    std::shared_ptr<V0_0_39_step_nodes> m_Nodes;
    bool m_NodesIsSet;
    std::shared_ptr<V0_0_39_step_tasks> m_Tasks;
    bool m_TasksIsSet;
    utility::string_t m_Pid;
    bool m_PidIsSet;
    std::shared_ptr<V0_0_39_step_CPU> m_CPU;
    bool m_CPUIsSet;
    utility::string_t m_Kill_request_user;
    bool m_Kill_request_userIsSet;
    utility::string_t m_State;
    bool m_StateIsSet;
    std::shared_ptr<V0_0_39_step_statistics> m_Statistics;
    bool m_StatisticsIsSet;
    std::shared_ptr<V0_0_39_step_step> m_Step;
    bool m_StepIsSet;
    std::shared_ptr<V0_0_39_step_task> m_Task;
    bool m_TaskIsSet;
    std::shared_ptr<V0_0_39_step_tres> m_Tres;
    bool m_TresIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_step_H_ */
