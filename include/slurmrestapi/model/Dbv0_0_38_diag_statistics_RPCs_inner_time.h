/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Dbv0_0_38_diag_statistics_RPCs_inner_time.h
 *
 * Time values
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_diag_statistics_RPCs_inner_time_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_diag_statistics_RPCs_inner_time_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Time values
/// </summary>
class  Dbv0_0_38_diag_statistics_RPCs_inner_time
    : public ModelBase
{
public:
    Dbv0_0_38_diag_statistics_RPCs_inner_time();
    virtual ~Dbv0_0_38_diag_statistics_RPCs_inner_time();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_diag_statistics_RPCs_inner_time members

    /// <summary>
    /// Average time spent processing this RPC type
    /// </summary>
    int32_t getAverage() const;
    bool averageIsSet() const;
    void unsetAverage();

    void setAverage(int32_t value);

    /// <summary>
    /// Total time spent processing this RPC type
    /// </summary>
    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsetTotal();

    void setTotal(int32_t value);


protected:
    int32_t m_Average;
    bool m_AverageIsSet;
    int32_t m_Total;
    bool m_TotalIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_diag_statistics_RPCs_inner_time_H_ */
