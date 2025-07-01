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

#include "OAIApplicationFormPartial_description.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIApplicationFormPartial_description::OAIApplicationFormPartial_description(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApplicationFormPartial_description::OAIApplicationFormPartial_description() {
    this->initializeModel();
}

OAIApplicationFormPartial_description::~OAIApplicationFormPartial_description() {}

void OAIApplicationFormPartial_description::initializeModel() {

    m_r_default_isSet = false;
    m_r_default_isValid = false;

    m_localizations_isSet = false;
    m_localizations_isValid = false;
}

void OAIApplicationFormPartial_description::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApplicationFormPartial_description::fromJsonObject(QJsonObject json) {

    m_r_default_isValid = ::dc_rest::fromJsonValue(m_r_default, json[QString("default")]);
    m_r_default_isSet = !json[QString("default")].isNull() && m_r_default_isValid;

    m_localizations_isValid = ::dc_rest::fromJsonValue(m_localizations, json[QString("localizations")]);
    m_localizations_isSet = !json[QString("localizations")].isNull() && m_localizations_isValid;
}

QString OAIApplicationFormPartial_description::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApplicationFormPartial_description::asJsonObject() const {
    QJsonObject obj;
    if (m_r_default_isSet) {
        obj.insert(QString("default"), ::dc_rest::toJsonValue(m_r_default));
    }
    if (m_localizations.size() > 0) {
        obj.insert(QString("localizations"), ::dc_rest::toJsonValue(m_localizations));
    }
    return obj;
}

QString OAIApplicationFormPartial_description::getRDefault() const {
    return m_r_default;
}
void OAIApplicationFormPartial_description::setRDefault(const QString &r_default) {
    m_r_default = r_default;
    m_r_default_isSet = true;
}

bool OAIApplicationFormPartial_description::is_r_default_Set() const{
    return m_r_default_isSet;
}

bool OAIApplicationFormPartial_description::is_r_default_Valid() const{
    return m_r_default_isValid;
}

QMap<QString, QString> OAIApplicationFormPartial_description::getLocalizations() const {
    return m_localizations;
}
void OAIApplicationFormPartial_description::setLocalizations(const QMap<QString, QString> &localizations) {
    m_localizations = localizations;
    m_localizations_isSet = true;
}

bool OAIApplicationFormPartial_description::is_localizations_Set() const{
    return m_localizations_isSet;
}

bool OAIApplicationFormPartial_description::is_localizations_Valid() const{
    return m_localizations_isValid;
}

bool OAIApplicationFormPartial_description::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_r_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_localizations.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApplicationFormPartial_description::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_r_default_isValid && true;
}

} // namespace dc_rest
