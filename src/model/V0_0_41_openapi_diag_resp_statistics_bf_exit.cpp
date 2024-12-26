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



#include "slurmrestapi/model/V0_0_41_openapi_diag_resp_statistics_bf_exit.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_diag_resp_statistics_bf_exit::V0_0_41_openapi_diag_resp_statistics_bf_exit()
{
    m_End_job_queue = 0;
    m_End_job_queueIsSet = false;
    m_Bf_max_job_start = 0;
    m_Bf_max_job_startIsSet = false;
    m_Bf_max_job_test = 0;
    m_Bf_max_job_testIsSet = false;
    m_Bf_max_time = 0;
    m_Bf_max_timeIsSet = false;
    m_Bf_node_space_size = 0;
    m_Bf_node_space_sizeIsSet = false;
    m_State_changed = 0;
    m_State_changedIsSet = false;
}

V0_0_41_openapi_diag_resp_statistics_bf_exit::~V0_0_41_openapi_diag_resp_statistics_bf_exit()
{
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_diag_resp_statistics_bf_exit::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_End_job_queueIsSet)
    {
        val[utility::conversions::to_string_t(U("end_job_queue"))] = ModelBase::toJson(m_End_job_queue);
    }
    if(m_Bf_max_job_startIsSet)
    {
        val[utility::conversions::to_string_t(U("bf_max_job_start"))] = ModelBase::toJson(m_Bf_max_job_start);
    }
    if(m_Bf_max_job_testIsSet)
    {
        val[utility::conversions::to_string_t(U("bf_max_job_test"))] = ModelBase::toJson(m_Bf_max_job_test);
    }
    if(m_Bf_max_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("bf_max_time"))] = ModelBase::toJson(m_Bf_max_time);
    }
    if(m_Bf_node_space_sizeIsSet)
    {
        val[utility::conversions::to_string_t(U("bf_node_space_size"))] = ModelBase::toJson(m_Bf_node_space_size);
    }
    if(m_State_changedIsSet)
    {
        val[utility::conversions::to_string_t(U("state_changed"))] = ModelBase::toJson(m_State_changed);
    }

    return val;
}

bool V0_0_41_openapi_diag_resp_statistics_bf_exit::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("end_job_queue"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("end_job_queue")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setEndJobQueue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEndJobQueue);
            setEndJobQueue(refVal_setEndJobQueue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bf_max_job_start"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bf_max_job_start")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setBfMaxJobStart;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBfMaxJobStart);
            setBfMaxJobStart(refVal_setBfMaxJobStart);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bf_max_job_test"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bf_max_job_test")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setBfMaxJobTest;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBfMaxJobTest);
            setBfMaxJobTest(refVal_setBfMaxJobTest);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bf_max_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bf_max_time")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setBfMaxTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBfMaxTime);
            setBfMaxTime(refVal_setBfMaxTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bf_node_space_size"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bf_node_space_size")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setBfNodeSpaceSize;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBfNodeSpaceSize);
            setBfNodeSpaceSize(refVal_setBfNodeSpaceSize);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("state_changed"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("state_changed")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setStateChanged;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStateChanged);
            setStateChanged(refVal_setStateChanged);
        }
    }
    return ok;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_End_job_queueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("end_job_queue")), m_End_job_queue));
    }
    if(m_Bf_max_job_startIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bf_max_job_start")), m_Bf_max_job_start));
    }
    if(m_Bf_max_job_testIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bf_max_job_test")), m_Bf_max_job_test));
    }
    if(m_Bf_max_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bf_max_time")), m_Bf_max_time));
    }
    if(m_Bf_node_space_sizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bf_node_space_size")), m_Bf_node_space_size));
    }
    if(m_State_changedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("state_changed")), m_State_changed));
    }
}

bool V0_0_41_openapi_diag_resp_statistics_bf_exit::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("end_job_queue"))))
    {
        int32_t refVal_setEndJobQueue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("end_job_queue"))), refVal_setEndJobQueue );
        setEndJobQueue(refVal_setEndJobQueue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bf_max_job_start"))))
    {
        int32_t refVal_setBfMaxJobStart;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bf_max_job_start"))), refVal_setBfMaxJobStart );
        setBfMaxJobStart(refVal_setBfMaxJobStart);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bf_max_job_test"))))
    {
        int32_t refVal_setBfMaxJobTest;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bf_max_job_test"))), refVal_setBfMaxJobTest );
        setBfMaxJobTest(refVal_setBfMaxJobTest);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bf_max_time"))))
    {
        int32_t refVal_setBfMaxTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bf_max_time"))), refVal_setBfMaxTime );
        setBfMaxTime(refVal_setBfMaxTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bf_node_space_size"))))
    {
        int32_t refVal_setBfNodeSpaceSize;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bf_node_space_size"))), refVal_setBfNodeSpaceSize );
        setBfNodeSpaceSize(refVal_setBfNodeSpaceSize);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("state_changed"))))
    {
        int32_t refVal_setStateChanged;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("state_changed"))), refVal_setStateChanged );
        setStateChanged(refVal_setStateChanged);
    }
    return ok;
}

int32_t V0_0_41_openapi_diag_resp_statistics_bf_exit::getEndJobQueue() const
{
    return m_End_job_queue;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::setEndJobQueue(int32_t value)
{
    m_End_job_queue = value;
    m_End_job_queueIsSet = true;
}

bool V0_0_41_openapi_diag_resp_statistics_bf_exit::endJobQueueIsSet() const
{
    return m_End_job_queueIsSet;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::unsetEnd_job_queue()
{
    m_End_job_queueIsSet = false;
}
int32_t V0_0_41_openapi_diag_resp_statistics_bf_exit::getBfMaxJobStart() const
{
    return m_Bf_max_job_start;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::setBfMaxJobStart(int32_t value)
{
    m_Bf_max_job_start = value;
    m_Bf_max_job_startIsSet = true;
}

bool V0_0_41_openapi_diag_resp_statistics_bf_exit::bfMaxJobStartIsSet() const
{
    return m_Bf_max_job_startIsSet;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::unsetBf_max_job_start()
{
    m_Bf_max_job_startIsSet = false;
}
int32_t V0_0_41_openapi_diag_resp_statistics_bf_exit::getBfMaxJobTest() const
{
    return m_Bf_max_job_test;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::setBfMaxJobTest(int32_t value)
{
    m_Bf_max_job_test = value;
    m_Bf_max_job_testIsSet = true;
}

bool V0_0_41_openapi_diag_resp_statistics_bf_exit::bfMaxJobTestIsSet() const
{
    return m_Bf_max_job_testIsSet;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::unsetBf_max_job_test()
{
    m_Bf_max_job_testIsSet = false;
}
int32_t V0_0_41_openapi_diag_resp_statistics_bf_exit::getBfMaxTime() const
{
    return m_Bf_max_time;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::setBfMaxTime(int32_t value)
{
    m_Bf_max_time = value;
    m_Bf_max_timeIsSet = true;
}

bool V0_0_41_openapi_diag_resp_statistics_bf_exit::bfMaxTimeIsSet() const
{
    return m_Bf_max_timeIsSet;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::unsetBf_max_time()
{
    m_Bf_max_timeIsSet = false;
}
int32_t V0_0_41_openapi_diag_resp_statistics_bf_exit::getBfNodeSpaceSize() const
{
    return m_Bf_node_space_size;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::setBfNodeSpaceSize(int32_t value)
{
    m_Bf_node_space_size = value;
    m_Bf_node_space_sizeIsSet = true;
}

bool V0_0_41_openapi_diag_resp_statistics_bf_exit::bfNodeSpaceSizeIsSet() const
{
    return m_Bf_node_space_sizeIsSet;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::unsetBf_node_space_size()
{
    m_Bf_node_space_sizeIsSet = false;
}
int32_t V0_0_41_openapi_diag_resp_statistics_bf_exit::getStateChanged() const
{
    return m_State_changed;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::setStateChanged(int32_t value)
{
    m_State_changed = value;
    m_State_changedIsSet = true;
}

bool V0_0_41_openapi_diag_resp_statistics_bf_exit::stateChangedIsSet() const
{
    return m_State_changedIsSet;
}

void V0_0_41_openapi_diag_resp_statistics_bf_exit::unsetState_changed()
{
    m_State_changedIsSet = false;
}
}
}
}
}


