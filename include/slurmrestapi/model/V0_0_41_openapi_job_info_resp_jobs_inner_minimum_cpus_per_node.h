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
 * V0_0_41_openapi_job_info_resp_jobs_inner_minimum_cpus_per_node.h
 *
 * Minimum number of CPUs per node
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_job_info_resp_jobs_inner_minimum_cpus_per_node_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_job_info_resp_jobs_inner_minimum_cpus_per_node_H_


#include "slurmrestapi/ModelBase.h"


namespace hm {
namespace slurm {
namespace client {
namespace model {



/// <summary>
/// Minimum number of CPUs per node
/// </summary>
class  V0_0_41_openapi_job_info_resp_jobs_inner_minimum_cpus_per_node
    : public ModelBase
{
public:
    V0_0_41_openapi_job_info_resp_jobs_inner_minimum_cpus_per_node();
    virtual ~V0_0_41_openapi_job_info_resp_jobs_inner_minimum_cpus_per_node();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_job_info_resp_jobs_inner_minimum_cpus_per_node members

    /// <summary>
    /// True if number has been set; False if number is unset
    /// </summary>
    bool isSet() const;
    bool setIsSet() const;
    void unsetset();

    void setSet(bool value);

    /// <summary>
    /// True if number has been set to infinite; \&quot;set\&quot; and \&quot;number\&quot; will be ignored
    /// </summary>
    bool isInfinite() const;
    bool infiniteIsSet() const;
    void unsetInfinite();

    void setInfinite(bool value);

    /// <summary>
    /// If \&quot;set\&quot; is True the number will be set with value; otherwise ignore number contents
    /// </summary>
    int32_t getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();

    void setNumber(int32_t value);


protected:
    bool m_set;
    bool m_setIsSet;
    bool m_Infinite;
    bool m_InfiniteIsSet;
    int32_t m_number;
    bool m_numberIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_job_info_resp_jobs_inner_minimum_cpus_per_node_H_ */
