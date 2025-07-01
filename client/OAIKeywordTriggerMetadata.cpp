/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIKeywordTriggerMetadata.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIKeywordTriggerMetadata::OAIKeywordTriggerMetadata(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIKeywordTriggerMetadata::OAIKeywordTriggerMetadata() {
    this->initializeModel();
}

OAIKeywordTriggerMetadata::~OAIKeywordTriggerMetadata() {}

void OAIKeywordTriggerMetadata::initializeModel() {

    m_keyword_filter_isSet = false;
    m_keyword_filter_isValid = false;

    m_regex_patterns_isSet = false;
    m_regex_patterns_isValid = false;

    m_allow_list_isSet = false;
    m_allow_list_isValid = false;
}

void OAIKeywordTriggerMetadata::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIKeywordTriggerMetadata::fromJsonObject(QJsonObject json) {

    m_keyword_filter_isValid = ::dc_rest::fromJsonValue(m_keyword_filter, json[QString("keyword_filter")]);
    m_keyword_filter_isSet = !json[QString("keyword_filter")].isNull() && m_keyword_filter_isValid;

    m_regex_patterns_isValid = ::dc_rest::fromJsonValue(m_regex_patterns, json[QString("regex_patterns")]);
    m_regex_patterns_isSet = !json[QString("regex_patterns")].isNull() && m_regex_patterns_isValid;

    m_allow_list_isValid = ::dc_rest::fromJsonValue(m_allow_list, json[QString("allow_list")]);
    m_allow_list_isSet = !json[QString("allow_list")].isNull() && m_allow_list_isValid;
}

QString OAIKeywordTriggerMetadata::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIKeywordTriggerMetadata::asJsonObject() const {
    QJsonObject obj;
    if (m_keyword_filter.size() > 0) {
        obj.insert(QString("keyword_filter"), ::dc_rest::toJsonValue(m_keyword_filter));
    }
    if (m_regex_patterns.size() > 0) {
        obj.insert(QString("regex_patterns"), ::dc_rest::toJsonValue(m_regex_patterns));
    }
    if (m_allow_list.size() > 0) {
        obj.insert(QString("allow_list"), ::dc_rest::toJsonValue(m_allow_list));
    }
    return obj;
}

QList<QString> OAIKeywordTriggerMetadata::getKeywordFilter() const {
    return m_keyword_filter;
}
void OAIKeywordTriggerMetadata::setKeywordFilter(const QList<QString> &keyword_filter) {
    m_keyword_filter = keyword_filter;
    m_keyword_filter_isSet = true;
}

bool OAIKeywordTriggerMetadata::is_keyword_filter_Set() const{
    return m_keyword_filter_isSet;
}

bool OAIKeywordTriggerMetadata::is_keyword_filter_Valid() const{
    return m_keyword_filter_isValid;
}

QList<QString> OAIKeywordTriggerMetadata::getRegexPatterns() const {
    return m_regex_patterns;
}
void OAIKeywordTriggerMetadata::setRegexPatterns(const QList<QString> &regex_patterns) {
    m_regex_patterns = regex_patterns;
    m_regex_patterns_isSet = true;
}

bool OAIKeywordTriggerMetadata::is_regex_patterns_Set() const{
    return m_regex_patterns_isSet;
}

bool OAIKeywordTriggerMetadata::is_regex_patterns_Valid() const{
    return m_regex_patterns_isValid;
}

QList<QString> OAIKeywordTriggerMetadata::getAllowList() const {
    return m_allow_list;
}
void OAIKeywordTriggerMetadata::setAllowList(const QList<QString> &allow_list) {
    m_allow_list = allow_list;
    m_allow_list_isSet = true;
}

bool OAIKeywordTriggerMetadata::is_allow_list_Set() const{
    return m_allow_list_isSet;
}

bool OAIKeywordTriggerMetadata::is_allow_list_Valid() const{
    return m_allow_list_isValid;
}

bool OAIKeywordTriggerMetadata::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_keyword_filter.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_regex_patterns.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_allow_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIKeywordTriggerMetadata::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
