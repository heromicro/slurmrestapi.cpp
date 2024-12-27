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



#include "slurmrestapi/model/V0_0_39_step.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_39_step::V0_0_39_step()
{
    m_TimeIsSet = false;
    m_Exit_codeIsSet = false;
    m_NodesIsSet = false;
    m_TasksIsSet = false;
    m_Pid = utility::conversions::to_string_t("");
    m_PidIsSet = false;
    m_CPUIsSet = false;
    m_Kill_request_user = utility::conversions::to_string_t("");
    m_Kill_request_userIsSet = false;
    m_State = utility::conversions::to_string_t("");
    m_StateIsSet = false;
    m_StatisticsIsSet = false;
    m_StepIsSet = false;
    m_TaskIsSet = false;
    m_TresIsSet = false;
}

V0_0_39_step::~V0_0_39_step()
{
}

void V0_0_39_step::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_step::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TimeIsSet)
    {
        val[utility::conversions::to_string_t(U("time"))] = ModelBase::toJson(m_Time);
    }
    if(m_Exit_codeIsSet)
    {
        val[utility::conversions::to_string_t(U("exit_code"))] = ModelBase::toJson(m_Exit_code);
    }
    if(m_NodesIsSet)
    {
        val[utility::conversions::to_string_t(U("nodes"))] = ModelBase::toJson(m_Nodes);
    }
    if(m_TasksIsSet)
    {
        val[utility::conversions::to_string_t(U("tasks"))] = ModelBase::toJson(m_Tasks);
    }
    if(m_PidIsSet)
    {
        val[utility::conversions::to_string_t(U("pid"))] = ModelBase::toJson(m_Pid);
    }
    if(m_CPUIsSet)
    {
        val[utility::conversions::to_string_t(U("CPU"))] = ModelBase::toJson(m_CPU);
    }
    if(m_Kill_request_userIsSet)
    {
        val[utility::conversions::to_string_t(U("kill_request_user"))] = ModelBase::toJson(m_Kill_request_user);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t(U("state"))] = ModelBase::toJson(m_State);
    }
    if(m_StatisticsIsSet)
    {
        val[utility::conversions::to_string_t(U("statistics"))] = ModelBase::toJson(m_Statistics);
    }
    if(m_StepIsSet)
    {
        val[utility::conversions::to_string_t(U("step"))] = ModelBase::toJson(m_Step);
    }
    if(m_TaskIsSet)
    {
        val[utility::conversions::to_string_t(U("task"))] = ModelBase::toJson(m_Task);
    }
    if(m_TresIsSet)
    {
        val[utility::conversions::to_string_t(U("tres"))] = ModelBase::toJson(m_Tres);
    }

    return val;
}

bool V0_0_39_step::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("time")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_step_time> refVal_setTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTime);
            setTime(refVal_setTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("exit_code"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("exit_code")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_job_exit_code> refVal_setExitCode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExitCode);
            setExitCode(refVal_setExitCode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("nodes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("nodes")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_step_nodes> refVal_setNodes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNodes);
            setNodes(refVal_setNodes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tasks"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tasks")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_step_tasks> refVal_setTasks;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTasks);
            setTasks(refVal_setTasks);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pid"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pid")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPid;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPid);
            setPid(refVal_setPid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("CPU"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("CPU")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_step_CPU> refVal_setCPU;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCPU);
            setCPU(refVal_setCPU);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("kill_request_user"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("kill_request_user")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setKillRequestUser;
            ok &= ModelBase::fromJson(fieldValue, refVal_setKillRequestUser);
            setKillRequestUser(refVal_setKillRequestUser);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("state"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("state")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setState;
            ok &= ModelBase::fromJson(fieldValue, refVal_setState);
            setState(refVal_setState);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("statistics"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("statistics")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_step_statistics> refVal_setStatistics;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatistics);
            setStatistics(refVal_setStatistics);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("step"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("step")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_step_step> refVal_setStep;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStep);
            setStep(refVal_setStep);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("task"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("task")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_step_task> refVal_setTask;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTask);
            setTask(refVal_setTask);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tres"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tres")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_step_tres> refVal_setTres;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTres);
            setTres(refVal_setTres);
        }
    }
    return ok;
}

void V0_0_39_step::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("time")), m_Time));
    }
    if(m_Exit_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("exit_code")), m_Exit_code));
    }
    if(m_NodesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("nodes")), m_Nodes));
    }
    if(m_TasksIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tasks")), m_Tasks));
    }
    if(m_PidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pid")), m_Pid));
    }
    if(m_CPUIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("CPU")), m_CPU));
    }
    if(m_Kill_request_userIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("kill_request_user")), m_Kill_request_user));
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("state")), m_State));
    }
    if(m_StatisticsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("statistics")), m_Statistics));
    }
    if(m_StepIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("step")), m_Step));
    }
    if(m_TaskIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("task")), m_Task));
    }
    if(m_TresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tres")), m_Tres));
    }
}

bool V0_0_39_step::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("time"))))
    {
        std::shared_ptr<V0_0_39_step_time> refVal_setTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("time"))), refVal_setTime );
        setTime(refVal_setTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("exit_code"))))
    {
        std::shared_ptr<V0_0_39_job_exit_code> refVal_setExitCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("exit_code"))), refVal_setExitCode );
        setExitCode(refVal_setExitCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("nodes"))))
    {
        std::shared_ptr<V0_0_39_step_nodes> refVal_setNodes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("nodes"))), refVal_setNodes );
        setNodes(refVal_setNodes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tasks"))))
    {
        std::shared_ptr<V0_0_39_step_tasks> refVal_setTasks;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tasks"))), refVal_setTasks );
        setTasks(refVal_setTasks);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pid"))))
    {
        utility::string_t refVal_setPid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pid"))), refVal_setPid );
        setPid(refVal_setPid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("CPU"))))
    {
        std::shared_ptr<V0_0_39_step_CPU> refVal_setCPU;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("CPU"))), refVal_setCPU );
        setCPU(refVal_setCPU);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("kill_request_user"))))
    {
        utility::string_t refVal_setKillRequestUser;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("kill_request_user"))), refVal_setKillRequestUser );
        setKillRequestUser(refVal_setKillRequestUser);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("state"))))
    {
        utility::string_t refVal_setState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("state"))), refVal_setState );
        setState(refVal_setState);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("statistics"))))
    {
        std::shared_ptr<V0_0_39_step_statistics> refVal_setStatistics;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("statistics"))), refVal_setStatistics );
        setStatistics(refVal_setStatistics);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("step"))))
    {
        std::shared_ptr<V0_0_39_step_step> refVal_setStep;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("step"))), refVal_setStep );
        setStep(refVal_setStep);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("task"))))
    {
        std::shared_ptr<V0_0_39_step_task> refVal_setTask;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("task"))), refVal_setTask );
        setTask(refVal_setTask);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tres"))))
    {
        std::shared_ptr<V0_0_39_step_tres> refVal_setTres;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tres"))), refVal_setTres );
        setTres(refVal_setTres);
    }
    return ok;
}

std::shared_ptr<V0_0_39_step_time> V0_0_39_step::getTime() const
{
    return m_Time;
}

void V0_0_39_step::setTime(const std::shared_ptr<V0_0_39_step_time>& value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool V0_0_39_step::timeIsSet() const
{
    return m_TimeIsSet;
}

void V0_0_39_step::unsetTime()
{
    m_TimeIsSet = false;
}
std::shared_ptr<V0_0_39_job_exit_code> V0_0_39_step::getExitCode() const
{
    return m_Exit_code;
}

void V0_0_39_step::setExitCode(const std::shared_ptr<V0_0_39_job_exit_code>& value)
{
    m_Exit_code = value;
    m_Exit_codeIsSet = true;
}

bool V0_0_39_step::exitCodeIsSet() const
{
    return m_Exit_codeIsSet;
}

void V0_0_39_step::unsetExit_code()
{
    m_Exit_codeIsSet = false;
}
std::shared_ptr<V0_0_39_step_nodes> V0_0_39_step::getNodes() const
{
    return m_Nodes;
}

void V0_0_39_step::setNodes(const std::shared_ptr<V0_0_39_step_nodes>& value)
{
    m_Nodes = value;
    m_NodesIsSet = true;
}

bool V0_0_39_step::nodesIsSet() const
{
    return m_NodesIsSet;
}

void V0_0_39_step::unsetNodes()
{
    m_NodesIsSet = false;
}
std::shared_ptr<V0_0_39_step_tasks> V0_0_39_step::getTasks() const
{
    return m_Tasks;
}

void V0_0_39_step::setTasks(const std::shared_ptr<V0_0_39_step_tasks>& value)
{
    m_Tasks = value;
    m_TasksIsSet = true;
}

bool V0_0_39_step::tasksIsSet() const
{
    return m_TasksIsSet;
}

void V0_0_39_step::unsetTasks()
{
    m_TasksIsSet = false;
}
utility::string_t V0_0_39_step::getPid() const
{
    return m_Pid;
}

void V0_0_39_step::setPid(const utility::string_t& value)
{
    m_Pid = value;
    m_PidIsSet = true;
}

bool V0_0_39_step::pidIsSet() const
{
    return m_PidIsSet;
}

void V0_0_39_step::unsetPid()
{
    m_PidIsSet = false;
}
std::shared_ptr<V0_0_39_step_CPU> V0_0_39_step::getCPU() const
{
    return m_CPU;
}

void V0_0_39_step::setCPU(const std::shared_ptr<V0_0_39_step_CPU>& value)
{
    m_CPU = value;
    m_CPUIsSet = true;
}

bool V0_0_39_step::cPUIsSet() const
{
    return m_CPUIsSet;
}

void V0_0_39_step::unsetCPU()
{
    m_CPUIsSet = false;
}
utility::string_t V0_0_39_step::getKillRequestUser() const
{
    return m_Kill_request_user;
}

void V0_0_39_step::setKillRequestUser(const utility::string_t& value)
{
    m_Kill_request_user = value;
    m_Kill_request_userIsSet = true;
}

bool V0_0_39_step::killRequestUserIsSet() const
{
    return m_Kill_request_userIsSet;
}

void V0_0_39_step::unsetKill_request_user()
{
    m_Kill_request_userIsSet = false;
}
utility::string_t V0_0_39_step::getState() const
{
    return m_State;
}

void V0_0_39_step::setState(const utility::string_t& value)
{
    m_State = value;
    m_StateIsSet = true;
}

bool V0_0_39_step::stateIsSet() const
{
    return m_StateIsSet;
}

void V0_0_39_step::unsetState()
{
    m_StateIsSet = false;
}
std::shared_ptr<V0_0_39_step_statistics> V0_0_39_step::getStatistics() const
{
    return m_Statistics;
}

void V0_0_39_step::setStatistics(const std::shared_ptr<V0_0_39_step_statistics>& value)
{
    m_Statistics = value;
    m_StatisticsIsSet = true;
}

bool V0_0_39_step::statisticsIsSet() const
{
    return m_StatisticsIsSet;
}

void V0_0_39_step::unsetStatistics()
{
    m_StatisticsIsSet = false;
}
std::shared_ptr<V0_0_39_step_step> V0_0_39_step::getStep() const
{
    return m_Step;
}

void V0_0_39_step::setStep(const std::shared_ptr<V0_0_39_step_step>& value)
{
    m_Step = value;
    m_StepIsSet = true;
}

bool V0_0_39_step::stepIsSet() const
{
    return m_StepIsSet;
}

void V0_0_39_step::unsetStep()
{
    m_StepIsSet = false;
}
std::shared_ptr<V0_0_39_step_task> V0_0_39_step::getTask() const
{
    return m_Task;
}

void V0_0_39_step::setTask(const std::shared_ptr<V0_0_39_step_task>& value)
{
    m_Task = value;
    m_TaskIsSet = true;
}

bool V0_0_39_step::taskIsSet() const
{
    return m_TaskIsSet;
}

void V0_0_39_step::unsetTask()
{
    m_TaskIsSet = false;
}
std::shared_ptr<V0_0_39_step_tres> V0_0_39_step::getTres() const
{
    return m_Tres;
}

void V0_0_39_step::setTres(const std::shared_ptr<V0_0_39_step_tres>& value)
{
    m_Tres = value;
    m_TresIsSet = true;
}

bool V0_0_39_step::tresIsSet() const
{
    return m_TresIsSet;
}

void V0_0_39_step::unsetTres()
{
    m_TresIsSet = false;
}
}
}
}
}

