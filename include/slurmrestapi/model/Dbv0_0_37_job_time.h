/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Dbv0_0_37_job_time.h
 *
 * Time properties
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_job_time_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_job_time_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_37_job_time_system.h"
#include "slurmrestapi/model/Dbv0_0_37_job_time_total.h"
#include "slurmrestapi/model/Dbv0_0_37_job_time_user.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_37_job_time_system;
class Dbv0_0_37_job_time_total;
class Dbv0_0_37_job_time_user;

/// <summary>
/// Time properties
/// </summary>
class  Dbv0_0_37_job_time
    : public ModelBase
{
public:
    Dbv0_0_37_job_time();
    virtual ~Dbv0_0_37_job_time();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_37_job_time members

    /// <summary>
    /// Total time elapsed
    /// </summary>
    int32_t getElapsed() const;
    bool elapsedIsSet() const;
    void unsetElapsed();

    void setElapsed(int32_t value);

    /// <summary>
    /// Total time eligible to run
    /// </summary>
    int32_t getEligible() const;
    bool eligibleIsSet() const;
    void unsetEligible();

    void setEligible(int32_t value);

    /// <summary>
    /// Timestamp of when job ended
    /// </summary>
    int32_t getEnd() const;
    bool endIsSet() const;
    void unsetEnd();

    void setEnd(int32_t value);

    /// <summary>
    /// Timestamp of when job started
    /// </summary>
    int32_t getStart() const;
    bool startIsSet() const;
    void unsetStart();

    void setStart(int32_t value);

    /// <summary>
    /// Timestamp of when job submitted
    /// </summary>
    int32_t getSubmission() const;
    bool submissionIsSet() const;
    void unsetSubmission();

    void setSubmission(int32_t value);

    /// <summary>
    /// Timestamp of when job last suspended
    /// </summary>
    int32_t getSuspended() const;
    bool suspendedIsSet() const;
    void unsetSuspended();

    void setSuspended(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_37_job_time_system> getSystem() const;
    bool systemIsSet() const;
    void unsetSystem();

    void setSystem(const std::shared_ptr<Dbv0_0_37_job_time_system>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_37_job_time_total> getTotal() const;
    bool totalIsSet() const;
    void unsetTotal();

    void setTotal(const std::shared_ptr<Dbv0_0_37_job_time_total>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_37_job_time_user> getUser() const;
    bool userIsSet() const;
    void unsetUser();

    void setUser(const std::shared_ptr<Dbv0_0_37_job_time_user>& value);

    /// <summary>
    /// Job wall clock time limit
    /// </summary>
    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetLimit();

    void setLimit(int32_t value);


protected:
    int32_t m_Elapsed;
    bool m_ElapsedIsSet;
    int32_t m_Eligible;
    bool m_EligibleIsSet;
    int32_t m_End;
    bool m_EndIsSet;
    int32_t m_Start;
    bool m_StartIsSet;
    int32_t m_Submission;
    bool m_SubmissionIsSet;
    int32_t m_Suspended;
    bool m_SuspendedIsSet;
    std::shared_ptr<Dbv0_0_37_job_time_system> m_System;
    bool m_SystemIsSet;
    std::shared_ptr<Dbv0_0_37_job_time_total> m_Total;
    bool m_TotalIsSet;
    std::shared_ptr<Dbv0_0_37_job_time_user> m_User;
    bool m_UserIsSet;
    int32_t m_Limit;
    bool m_LimitIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_job_time_H_ */