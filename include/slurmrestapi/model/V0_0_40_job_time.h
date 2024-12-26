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
 * V0_0_40_job_time.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_job_time_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_job_time_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_uint32_no_val.h"
#include "slurmrestapi/model/V0_0_40_job_time_system.h"
#include "slurmrestapi/model/V0_0_40_job_time_total.h"
#include "slurmrestapi/model/V0_0_40_job_time_user.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_40_job_time_system;
class V0_0_40_uint32_no_val;
class V0_0_40_job_time_total;
class V0_0_40_job_time_user;


/// <summary>
/// 
/// </summary>
class  V0_0_40_job_time
    : public ModelBase
{
public:
    V0_0_40_job_time();
    virtual ~V0_0_40_job_time();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_job_time members

    /// <summary>
    /// Elapsed time in seconds
    /// </summary>
    int32_t getElapsed() const;
    bool elapsedIsSet() const;
    void unsetElapsed();

    void setElapsed(int32_t value);

    /// <summary>
    /// Time when the job became eligible to run (UNIX timestamp)
    /// </summary>
    int64_t getEligible() const;
    bool eligibleIsSet() const;
    void unsetEligible();

    void setEligible(int64_t value);

    /// <summary>
    /// End time (UNIX timestamp)
    /// </summary>
    int64_t getEnd() const;
    bool endIsSet() const;
    void unsetEnd();

    void setEnd(int64_t value);

    /// <summary>
    /// Time execution began (UNIX timestamp)
    /// </summary>
    int64_t getStart() const;
    bool startIsSet() const;
    void unsetStart();

    void setStart(int64_t value);

    /// <summary>
    /// Time when the job was submitted (UNIX timestamp)
    /// </summary>
    int64_t getSubmission() const;
    bool submissionIsSet() const;
    void unsetSubmission();

    void setSubmission(int64_t value);

    /// <summary>
    /// Total time in suspended state in seconds
    /// </summary>
    int32_t getSuspended() const;
    bool suspendedIsSet() const;
    void unsetSuspended();

    void setSuspended(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_job_time_system> getSystem() const;
    bool systemIsSet() const;
    void unsetSystem();

    void setSystem(const std::shared_ptr<V0_0_40_job_time_system>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_uint32_no_val> getLimit() const;
    bool limitIsSet() const;
    void unsetLimit();

    void setLimit(const std::shared_ptr<V0_0_40_uint32_no_val>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_job_time_total> getTotal() const;
    bool totalIsSet() const;
    void unsetTotal();

    void setTotal(const std::shared_ptr<V0_0_40_job_time_total>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_job_time_user> getUser() const;
    bool userIsSet() const;
    void unsetUser();

    void setUser(const std::shared_ptr<V0_0_40_job_time_user>& value);


protected:
    int32_t m_Elapsed;
    bool m_ElapsedIsSet;
    int64_t m_Eligible;
    bool m_EligibleIsSet;
    int64_t m_End;
    bool m_EndIsSet;
    int64_t m_Start;
    bool m_StartIsSet;
    int64_t m_Submission;
    bool m_SubmissionIsSet;
    int32_t m_Suspended;
    bool m_SuspendedIsSet;
    std::shared_ptr<V0_0_40_job_time_system> m_System;
    bool m_SystemIsSet;
    std::shared_ptr<V0_0_40_uint32_no_val> m_Limit;
    bool m_LimitIsSet;
    std::shared_ptr<V0_0_40_job_time_total> m_Total;
    bool m_TotalIsSet;
    std::shared_ptr<V0_0_40_job_time_user> m_User;
    bool m_UserIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_job_time_H_ */
