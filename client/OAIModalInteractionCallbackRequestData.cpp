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

#include "OAIModalInteractionCallbackRequestData.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIModalInteractionCallbackRequestData::OAIModalInteractionCallbackRequestData(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIModalInteractionCallbackRequestData::OAIModalInteractionCallbackRequestData() {
    this->initializeModel();
}

OAIModalInteractionCallbackRequestData::~OAIModalInteractionCallbackRequestData() {}

void OAIModalInteractionCallbackRequestData::initializeModel() {

    m_custom_id_isSet = false;
    m_custom_id_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_components_isSet = false;
    m_components_isValid = false;
}

void OAIModalInteractionCallbackRequestData::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIModalInteractionCallbackRequestData::fromJsonObject(QJsonObject json) {

    m_custom_id_isValid = ::dc_rest::fromJsonValue(m_custom_id, json[QString("custom_id")]);
    m_custom_id_isSet = !json[QString("custom_id")].isNull() && m_custom_id_isValid;

    m_title_isValid = ::dc_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_components_isValid = ::dc_rest::fromJsonValue(m_components, json[QString("components")]);
    m_components_isSet = !json[QString("components")].isNull() && m_components_isValid;
}

QString OAIModalInteractionCallbackRequestData::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIModalInteractionCallbackRequestData::asJsonObject() const {
    QJsonObject obj;
    if (m_custom_id_isSet) {
        obj.insert(QString("custom_id"), ::dc_rest::toJsonValue(m_custom_id));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::dc_rest::toJsonValue(m_title));
    }
    if (m_components.size() > 0) {
        obj.insert(QString("components"), ::dc_rest::toJsonValue(m_components));
    }
    return obj;
}

QString OAIModalInteractionCallbackRequestData::getCustomId() const {
    return m_custom_id;
}
void OAIModalInteractionCallbackRequestData::setCustomId(const QString &custom_id) {
    m_custom_id = custom_id;
    m_custom_id_isSet = true;
}

bool OAIModalInteractionCallbackRequestData::is_custom_id_Set() const{
    return m_custom_id_isSet;
}

bool OAIModalInteractionCallbackRequestData::is_custom_id_Valid() const{
    return m_custom_id_isValid;
}

QString OAIModalInteractionCallbackRequestData::getTitle() const {
    return m_title;
}
void OAIModalInteractionCallbackRequestData::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIModalInteractionCallbackRequestData::is_title_Set() const{
    return m_title_isSet;
}

bool OAIModalInteractionCallbackRequestData::is_title_Valid() const{
    return m_title_isValid;
}

QList<OAIActionRowComponentForModalRequest> OAIModalInteractionCallbackRequestData::getComponents() const {
    return m_components;
}
void OAIModalInteractionCallbackRequestData::setComponents(const QList<OAIActionRowComponentForModalRequest> &components) {
    m_components = components;
    m_components_isSet = true;
}

bool OAIModalInteractionCallbackRequestData::is_components_Set() const{
    return m_components_isSet;
}

bool OAIModalInteractionCallbackRequestData::is_components_Valid() const{
    return m_components_isValid;
}

bool OAIModalInteractionCallbackRequestData::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_custom_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_components.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIModalInteractionCallbackRequestData::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_custom_id_isValid && m_title_isValid && m_components_isValid && true;
}

} // namespace dc_rest
