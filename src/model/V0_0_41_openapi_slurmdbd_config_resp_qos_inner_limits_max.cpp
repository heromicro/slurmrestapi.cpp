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



#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max()
{
    m_Active_jobsIsSet = false;
    m_TresIsSet = false;
    m_Wall_clockIsSet = false;
    m_JobsIsSet = false;
    m_AccruingIsSet = false;
}

V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::~V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max()
{
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Active_jobsIsSet)
    {
        val[utility::conversions::to_string_t(U("active_jobs"))] = ModelBase::toJson(m_Active_jobs);
    }
    if(m_TresIsSet)
    {
        val[utility::conversions::to_string_t(U("tres"))] = ModelBase::toJson(m_Tres);
    }
    if(m_Wall_clockIsSet)
    {
        val[utility::conversions::to_string_t(U("wall_clock"))] = ModelBase::toJson(m_Wall_clock);
    }
    if(m_JobsIsSet)
    {
        val[utility::conversions::to_string_t(U("jobs"))] = ModelBase::toJson(m_Jobs);
    }
    if(m_AccruingIsSet)
    {
        val[utility::conversions::to_string_t(U("accruing"))] = ModelBase::toJson(m_Accruing);
    }

    return val;
}

bool V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("active_jobs"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("active_jobs")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_active_jobs> refVal_setActiveJobs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setActiveJobs);
            setActiveJobs(refVal_setActiveJobs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tres"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tres")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres> refVal_setTres;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTres);
            setTres(refVal_setTres);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("wall_clock"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wall_clock")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock> refVal_setWallClock;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWallClock);
            setWallClock(refVal_setWallClock);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("jobs"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("jobs")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs> refVal_setJobs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setJobs);
            setJobs(refVal_setJobs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accruing"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accruing")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_accruing> refVal_setAccruing;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccruing);
            setAccruing(refVal_setAccruing);
        }
    }
    return ok;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Active_jobsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("active_jobs")), m_Active_jobs));
    }
    if(m_TresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tres")), m_Tres));
    }
    if(m_Wall_clockIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wall_clock")), m_Wall_clock));
    }
    if(m_JobsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("jobs")), m_Jobs));
    }
    if(m_AccruingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accruing")), m_Accruing));
    }
}

bool V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("active_jobs"))))
    {
        std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_active_jobs> refVal_setActiveJobs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("active_jobs"))), refVal_setActiveJobs );
        setActiveJobs(refVal_setActiveJobs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tres"))))
    {
        std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres> refVal_setTres;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tres"))), refVal_setTres );
        setTres(refVal_setTres);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("wall_clock"))))
    {
        std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock> refVal_setWallClock;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wall_clock"))), refVal_setWallClock );
        setWallClock(refVal_setWallClock);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("jobs"))))
    {
        std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs> refVal_setJobs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("jobs"))), refVal_setJobs );
        setJobs(refVal_setJobs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accruing"))))
    {
        std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_accruing> refVal_setAccruing;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accruing"))), refVal_setAccruing );
        setAccruing(refVal_setAccruing);
    }
    return ok;
}

std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_active_jobs> V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::getActiveJobs() const
{
    return m_Active_jobs;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::setActiveJobs(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_active_jobs>& value)
{
    m_Active_jobs = value;
    m_Active_jobsIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::activeJobsIsSet() const
{
    return m_Active_jobsIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::unsetActive_jobs()
{
    m_Active_jobsIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres> V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::getTres() const
{
    return m_Tres;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::setTres(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres>& value)
{
    m_Tres = value;
    m_TresIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::tresIsSet() const
{
    return m_TresIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::unsetTres()
{
    m_TresIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock> V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::getWallClock() const
{
    return m_Wall_clock;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::setWallClock(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock>& value)
{
    m_Wall_clock = value;
    m_Wall_clockIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::wallClockIsSet() const
{
    return m_Wall_clockIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::unsetWall_clock()
{
    m_Wall_clockIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs> V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::getJobs() const
{
    return m_Jobs;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::setJobs(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs>& value)
{
    m_Jobs = value;
    m_JobsIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::jobsIsSet() const
{
    return m_JobsIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::unsetJobs()
{
    m_JobsIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_accruing> V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::getAccruing() const
{
    return m_Accruing;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::setAccruing(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_accruing>& value)
{
    m_Accruing = value;
    m_AccruingIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::accruingIsSet() const
{
    return m_AccruingIsSet;
}

void V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max::unsetAccruing()
{
    m_AccruingIsSet = false;
}
}
}
}
}

